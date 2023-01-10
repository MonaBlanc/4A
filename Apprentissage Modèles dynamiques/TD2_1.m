% TD2_1
% MG, janvier 2022


%

clear;
clc
close all

format compact

load data_TD2_1;

s= tf('s'); % indique � MATLAB que la variable s sera consid�r�e comme 
            % la variable de Laplace}

load data_TD2_1
% Saisir les param�tres du mod�le � temps continu 
K=1;
T=1;


disp('Mod�le � temps continu')
G=K/(1+T*s)

% Simulation des donn�es mesur�es

N=50;
u=[ones(N,1);zeros(N,1)];%;ones(N,1);zeros(N,1)];

t=(0:length(u)-1)'*Te;

y=lsim(G,u,t);

NewTe=5*Te;
taux_dec=NewTe/Te;
ye=y(1:taux_dec:end);
ue=u(1:taux_dec:end);
te=t(1:taux_dec:end);


figure(1)
subplot(2,1,1)
%plot(t,y,':',te,ye,'o','lineWidth',1.5)
plot(te,ye,'o','lineWidth',1.5)
ylabel('y')
grid
axis([0 100 -1 3])
set(gca,'FontSize',14,'FontName','helvetica');
title('Sortie')

subplot(2,1,2)
plot(te,ue,'o','lineWidth',1.5)
grid
axis([0 100 -1 2])
xlabel('Temps en sec')
title('Entr�e')
ylabel('u')
set(gca,'FontSize',14,'FontName','helvetica');


% R�ponse du mod�le � temps continu

yGc=K*(1-exp(-tk/T));


% R�ponse du mod�le � temps discret - m�thode du BOZ
a1=-exp(-Te/T);
b1=K*(1+a1);
z= tf('z'); % indique � MATLAB que la variable z sera consid�r�e comme 

disp('Mod�le discret')
Gd=b1/(z+a1)

% Implanter votre simulation du mod�le � temps discret

%......
%......
%......
%......


% Pour info, utilisation de la fonction de Matlab
disp('Mod�le discret obtenu par la fonction c2d de Matlab')
Gc2d=c2d(G,Te)

% pour info : calcul de la sortie du filtre avec la fonction filter de Matlab
yGd=filter([0 b1],[1 a1],u);


disp('      t_k     y(t_k)   yGc(t_k)  yGd(t_k)')
[tk(1:8) y(1:8) yGc(1:8) yGd(1:8)]

figure(2),
plot(tk(1:8),y(1:8),tk(1:8),yGc(1:8),'x')
hold on
stem(tk(1:8),yGd(1:8))
hold off


