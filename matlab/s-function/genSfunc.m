close all;
clear;
clc;

%% Task goal: Use c-code in simulink as a library
% Create a lib model from an ansi-c source code
% Use that lib inside a slx as a demo

%% load structure definition
load('trip_struct.mat');

%% create s-function
lct_obj = legacy_code('initialize');
lct_obj.SourceFiles = {'trip.c'};
lct_obj.HeaderFiles = {'trip.h'};
lct_obj.SrcPaths = {'in\src'};
lct_obj.IncPaths = {'in\inc'};
lct_obj.SFunctionName = 'TRIP_vCalculateAlgo';
lct_obj.OutputFcnSpec = 'TRIP__tstData y1 = TRIP_vCalculateAlgo(uint8 y2[1], uint8 u1, uint8 u2)';

%% create the api block
legacy_code('sfcn_tlc_generate',lct_obj);
legacy_code('sfcn_cmex_generate',lct_obj);
legacy_code('compile',lct_obj);
legacy_code('slblock_generate',lct_obj);

%% save the model and clear workspace
save_system('untitled','TripComputerAlgoLib','BreakAllLinks',true);












