










class CfgPatches
{
class american
{
units[] = {};
weapons[] = {};
requiredVersion = 0.1;
requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Structures_F","A3_Map_Data","A3_Map_Stratis"};
fileName = "american.pbo";
author[] = {"adriacp05"};
authorUrl = "http://americanlife.es";
versionDesc = "State of Lejania";
version = "1.00";
versionStr = 1.0;
versionAr[] = {1,0,0};
magazines[] = {};
ammo[] = {};
worlds[] = {"american"};
};
};
class CfgVehicles
{
class All;
class AllVehicles: All{};
class Land: AllVehicles{};
class LandVehicle: Land{};
class car: LandVehicle
{
rightDustEffects[] = {{"forest","RDustEffects"},{"forest","RGrassDryEffects"},{"forest","RDirtEffects"},{"hierba","RDustEffects"},{"hierba","RGrassEffects"},{"hierba","RDirtEffects"},{"piedra","RDirtEffects"},{"piedra","RDustEffects"},{"piedra","RStonesEffects"},{"arena","RDustEffects"},{"arena","RSandEffects"},{"arena","RDirtEffects"},{"arena","RStonesEffects"},{"tierra","RDustEffects"},{"tierra","RSandEffects"},{"tierra","RDirtEffects"},{"tierra","RStonesEffects"},{"road_dust","RDustEffects"},{"road_dust","RSandEffects"},{"road_dust","RDirtEffects"},{"road_dust","RStonesEffects"},{"KzDirtRoad","RDustEffects"},{"KzDirtRoad","RSandEffects"},{"KzDirtRoad","RDirtEffects"},{"KzDirtRoad","RStonesEffects"},{"cemento","RDustEffects"},{"cemento","RSandEffects"},{"cemento","RDirtEffects"},{"cemento","RStonesEffects"}};
leftDustEffects[] = {{"forest","LDustEffects"},{"forest","LGrassDryEffects"},{"forest","LDirtEffects"},{"hierba","LDustEffects"},{"hierba","LGrassEffects"},{"hierba","LDirtEffects"},{"piedra","LDirtEffects"},{"piedra","LDustEffects"},{"piedra","LStonesEffects"},{"arena","LDustEffects"},{"arena","LSandEffects"},{"arena","LDirtEffects"},{"arena","LStonesEffects"},{"tierra","LDustEffects"},{"tierra","LSandEffects"},{"tierra","LDirtEffects"},{"tierra","LStonesEffects"},{"KzDirtRoad","LDustEffects"},{"KzDirtRoad","LSandEffects"},{"KzDirtRoad","LDirtEffects"},{"KzDirtRoad","LStonesEffects"},{"cemento","LDustEffects"},{"cemento","LSandEffects"},{"cemento","LDirtEffects"},{"cemento","LStonesEffects"},{"road_dust","LDustEffects"},{"road_dust","LSandEffects"},{"road_dust","LDirtEffects"},{"road_dust","LStonesEffects"}};
};
class tank: LandVehicle
{
rightDustEffects[] = {{"forest","RDustEffects"},{"forest","RDirtEffectsBig"},{"forest","RStonesEffectsBig"},{"forest","RGrassEffectsDryBig"},{"piedra","RDustEffects"},{"piedra","RDirtEffectsBig"},{"piedra","RStonesEffectsBig"},{"hierba","RDustEffects"},{"hierba","RGrassEffectsBig"},{"hierba","RDirtEffectsBig"},{"hierba","RStonesEffectsBig"},{"arena","LDustEffects"},{"arena","LDirtEffectsBig"},{"arena","LStonesEffectsBig"},{"tierra","LDustEffects"},{"tierra","LDirtEffectsBig"},{"tierra","LStonesEffectsBig"},{"KzDirtRoad","RStonesEffectsBig"},{"KzDirtRoad","LDustEffects"},{"KzDirtRoad","LDirtEffectsBig"},{"KzDirtRoad","LStonesEffectsBig"},{"cemento","RStonesEffectsBig"},{"cemento","LDustEffects"},{"cemento","LDirtEffectsBig"},{"cemento","LStonesEffectsBig"},{"road_dust","LDustEffects"},{"road_dust","LDirtEffectsBig"},{"road_dust","LStonesEffectsBig"}};
leftDustEffects[] = {{"forest","LDustEffects"},{"forest","LDirtEffectsBig"},{"forest","LStonesEffectsBig"},{"forest","LGrassEffectsDryBig"},{"piedra","LDustEffects"},{"piedra","LDirtEffectsBig"},{"piedra","LStonesEffectsBig"},{"hierba","LDustEffects"},{"hierba","LGrassEffectsBig"},{"hierba","LDirtEffectsBig"},{"hierba","LStonesEffectsBig"},{"arena","LDustEffects"},{"arena","LDirtEffectsBig"},{"arena","LStonesEffectsBig"},{"tierra","LDustEffects"},{"tierra","LDirtEffectsBig"},{"tierra","LStonesEffectsBig"},{"KzDirtRoad","LStonesEffectsBig"},{"KzDirtRoad","LDustEffects"},{"KzDirtRoad","LDirtEffectsBig"},{"KzDirtRoad","LStonesEffectsBig"},{"cemento","LStonesEffectsBig"},{"cemento","LDustEffects"},{"cemento","LDirtEffectsBig"},{"cemento","LStonesEffectsBig"},{"road_dust","LDustEffects"},{"road_dust","LDirtEffectsBig"},{"road_dust","LStonesEffectsBig"}};
};
class Air: AllVehicles
{
rightDustEffects[] = {{"forest","RDustEffectsAir"},{"forest","RGrassDryEffects"},{"forest","RDirtEffects"},{"hierba","RDustEffectsAir"},{"hierba","RGrassEffects"},{"hierba","RDirtEffects"},{"piedra","RDirtEffects"},{"piedra","RDustEffectsAir"},{"piedra","RStonesEffects"},{"arena","RDustEffectsAir"},{"arena","RSandEffects"},{"arena","RDirtEffects"},{"arena","RStonesEffects"},{"tierra","RDustEffectsAir"},{"tierra","RSandEffects"},{"tierra","RDirtEffects"},{"tierra","RStonesEffects"},{"KzDirtRoad","RDustEffectsAir"},{"KzDirtRoad","RSandEffects"},{"KzDirtRoad","RDirtEffects"},{"KzDirtRoad","RStonesEffects"},{"cemento","RDustEffectsAir"},{"cemento","RSandEffects"},{"cemento","RDirtEffects"},{"cemento","RStonesEffects"},{"road_dust","RDustEffectsAir"},{"road_dust","RSandEffects"},{"road_dust","RDirtEffects"},{"road_dust","RStonesEffects"}};
leftDustEffects[] = {{"forest","LDustEffectsAir"},{"forest","LGrassDryEffects"},{"forest","LDirtEffects"},{"hierba","LDustEffectsAir"},{"hierba","LGrassEffects"},{"hierba","LDirtEffects"},{"piedra","LDirtEffects"},{"piedra","LDustEffectsAir"},{"piedra","LStonesEffects"},{"arena","LDustEffectsAir"},{"arena","LSandEffects"},{"arena","LDirtEffects"},{"arena","LStonesEffects"},{"tierra","LDustEffectsAir"},{"tierra","LSandEffects"},{"tierra","LDirtEffects"},{"tierra","LStonesEffects"},{"KzDirtRoad","LDustEffectsAir"},{"KzDirtRoad","LSandEffects"},{"KzDirtRoad","LDirtEffects"},{"KzDirtRoad","LStonesEffects"},{"cemento","LDustEffectsAir"},{"cemento","LSandEffects"},{"cemento","LDirtEffects"},{"cemento","LStonesEffects"},{"road_dust","LDustEffectsAir"},{"road_dust","LSandEffects"},{"road_dust","LDirtEffects"},{"road_dust","LStonesEffects"}};
};
class Man: Land
{
rightDustEffects[] = {{"forest","RDustEffectsMan"},{"hierba","RDustEffectsMan"},{"piedra","RDustEffectsMan"},{"tierra","RDustEffectsMan"},{"arena","RDustEffectsMan"},{"KzDirtRoad","RDustEffectsMan"},{"cemento","RDustEffectsMan"},{"road_dust","RDustEffectsMan"}};
leftDustEffects[] = {{"forest","LDustEffectsMan"},{"hierba","LDustEffectsMan"},{"piedra","LDustEffectsMan"},{"tierra","LDustEffectsMan"},{"arena","LDustEffectsMan"},{"KzDirtRoad","LDustEffectsMan"},{"cemento","LDustEffectsMan"},{"road_dust","LDustEffectsMan"}};
};
};
class CfgWorlds
{
class DefaultWorld
{
class Weather
{
class Overcast;
};
};
class CAWorld: DefaultWorld
{
class Grid{};
class DayLightingBrightAlmost;
class DayLightingRainy;
class DefaultClutter;
class Weather: Weather
{
class Lighting;
class Overcast: Overcast
{
class Weather1;
class Weather2;
class Weather3;
class Weather4;
class Weather5;
class Weather6;
};
};
};
class DefaultLighting;
class american: CAWorld
{
dynLightMinBrightnessAmbientCoef = 0.5;
dynLightMinBrightnessAbsolute = 0.05;
class Sea
{
seaTexture = "a3\data_f\seatexture_co.paa";
seaMaterial = "#water";
shoreMaterial = "#shore";
shoreFoamMaterial = "#shorefoam";
shoreWetMaterial = "#shorewet";
WaterMapScale = 20;
WaterGrid = 50;
MaxTide = 0;
MaxWave = 0.25;
SeaWaveXScale = "2.0/50";
SeaWaveZScale = "1.0/50";
SeaWaveHScale = 1.0;
SeaWaveXDuration = 5000;
SeaWaveZDuration = 10000;
};
class Underwater
{
noWaterFog = -0.001;
fullWaterFog = 0.001;
deepWaterFog = 200;
waterFogDistanceNear = 10;
waterFogDistance = 40;
waterColor[] = {0.04,0.16,0.22};
deepWaterColor[] = {0.0,0.001,0.009};
surfaceColor[] = {0.04,0.16,0.22};
deepSurfaceColor[] = {0.0,0.001,0.009};
};
class SeaWaterShaderPars
{
refractionMoveCoef = 0.03;
minWaterOpacity = 0.0;
waterOpacityDistCoef = 0.4;
underwaterOpacity = 0.5;
waterOpacityFadeStart = 60;
waterOpacityFadeLength = 120;
startWeather = 0.1;
startFog = 0.0;
forecastWeather = 0.2;
forecastFog = 0.0;
startFogBase = 0.0;
forecastFogBase = 0.0;
startFogDecay = 0.013;
forecastFogDecay = 0.013;
fogBeta0Min = 0.0;
fogBeta0Max = 0.05;
};
hazeDistCoef = 0.1;
hazeFogCoef = 0.98;
hazeBaseHeight = 150;
hazeBaseBeta0 = 6e-005;
hazeDensityDecay = 0.0006;
horizonParallaxCoef = 0.045;
horizonFogColorationStart = "0.8f";
skyFogColorationStart = "0.7f";
soundMapSizeCoef = 4;
satelliteNormalBlendStart = 10;
satelliteNormalBlendEnd = 100;
skyObject = "A3\Map_Stratis\data\obloha.p3d";
horizontObject = "A3\Map_Stratis\data\horizont.p3d";
skyTexture = "A3\Map_Stratis\data\sky_semicloudy_sky.paa";
skyTextureR = "A3\Map_Stratis\data\sky_semicloudy_lco.paa";
worldId = 4;
description = "State of Lejania";
icon = "";
worldName = "Lejania\american.wrp";
pictureMap = "Lejania\data\ico.paa";
pictureShot = "";
plateFormat = "AS$-####";
plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
author = "adriacp05";
mapSize = 20480;
mapZone = 31;
longitude = 2.966667;
latitude = 39.158333;
elevationOffset = 0;
envTexture = "A3\Data_f\env_land_ca.paa";
newRoadsShape = "Lejania\data\roads\roads.shp";
startTime = "10:45";
startDate = "5/5/2017";
centerPosition[] = {4400,4400,300};
seagullPos[] = {1040,850,500};
clutterGrid = 0.8;
clutterDist = 100;
noDetailDist = 50;
fullDetailDist = 5;
midDetailTexture = "A3\Map_Data\middle_mco.paa";
minTreesInForestSquare = 3;
minRocksInRockSquare = 3;
loadingTexts[] = {"Desactiva el PIP para una mejora de rendimiento"};
ilsPosition[] = {0,0};
ilsDirection[] = {0,0,0};
ilsTaxiIn[] = {};
ilsTaxiOff[] = {};
drawTaxiway = 0;
enableBloodSplashes = 1;
enableTracks = 1;
enableFootsteps = 1;
class OutsideTerrain
{
satellite = "";
enableTerrainSynth = 0;
class Layers
{
class Layer0
{
nopx = "";
texture = "";
};
};
colorOutside[] = {0.294118,0.333333,0.372549,1};
};
class SecondaryAirports{};
class ReplaceObjects{};
class Sounds
{
sounds[] = {};
};
class Animation
{
vehicles[] = {};
};
class Grid: Grid
{
offsetX = 0;
offsetY = 20480;
class Zoom1
{
zoomMax = 0.15;
format = "XY";
formatX = "000";
formatY = "000";
stepX = 100;
stepY = -100;
};
class Zoom2
{
zoomMax = 0.85;
format = "XY";
formatX = "00";
formatY = "00";
stepX = 1000;
stepY = -1000;
};
class Zoom3
{
zoomMax = 1e+030;
format = "XY";
formatX = "0";
formatY = "0";
stepX = 10000;
stepY = -10000;
};
};
class clutter
{
class c_GrassBunch_HI: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_HI.p3d";
affectedByWind = 0.2;
swLighting = 1;
scaleMin = 0.8;
scaleMax = 1.3;
};
class c_GrassBunch_LO: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Grass\c_GrassBunch_LO.p3d";
affectedByWind = 0.2;
swLighting = 1;
scaleMin = 0.65;
scaleMax = 1.4;
};
class c_GrassTropic: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_Tropic.p3d";
affectedByWind = 0.2;
swLighting = 1;
scaleMin = 0.65;
scaleMax = 1.4;
};
class c_Grass_nettle: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_nettle.p3d";
affectedByWind = 0.2;
swLighting = 0;
scaleMin = 0.8;
scaleMax = 1.6;
};
class c_Grass_Leaves_coltsfoot: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_Leaves_coltsfoot.p3d";
affectedByWind = 0.1;
swLighting = 0;
scaleMin = 0.5;
scaleMax = 1.4;
};
class c_Grass_leaf_big: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Grass\c_Grass_leaf_big.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 0.5;
scaleMax = 1.4;
};
class c_forest_roots: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_roots.p3d";
affectedByWind = 0;
swLighting = 0;
scaleMin = 0.4;
scaleMax = 2.2;
};
class c_forest_violet_leaves: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 0.7;
scaleMax = 1.05;
};
class c_forest_violet_leaves2: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_leaves2.p3d";
affectedByWind = 0.1;
swLighting = 0;
scaleMin = 0.5;
scaleMax = 1.15;
};
class c_forest_violet_single: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_violet_single.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 0.9;
scaleMax = 1.1;
};
class c_forest_fern: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_fern.p3d";
affectedByWind = 0.1;
swLighting = 0;
scaleMin = 0.8;
scaleMax = 1.65;
};
class c_forest_BiglLeaves: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 0.5;
scaleMax = 1.4;
};
class c_forest_BiglLeaves2: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Forest\c_forest_BiglLeaves2.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 0.5;
scaleMax = 1.4;
};
class sparse_Grass: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_sparse_Grass.p3d";
affectedByWind = 0.2;
swLighting = 1;
scaleMin = 1.25;
scaleMax = 1.6;
};
class short_Grass: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_short_Grass.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 1.1;
scaleMax = 1.9;
};
class mimosa: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_mimosa.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 1.0;
scaleMax = 1.5;
};
class large_stones: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_large_stones.p3d";
affectedByWind = 0.0;
swLighting = 1;
scaleMin = 0.8;
scaleMax = 1.0;
};
class small_stones: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_small_stones.p3d";
affectedByWind = 0.0;
swLighting = 1;
scaleMin = 0.3;
scaleMax = 0.85;
};
class sparse_Grass2: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Red_dirt\c_red_dirt_sparse_Grass2.p3d";
affectedByWind = 0.1;
swLighting = 1;
scaleMin = 0.5;
scaleMax = 0.75;
};
class rock_stones: DefaultClutter
{
model = "A3\Vegetation_F_Exp\Clutter\Cliff\c_rock_stones.p3d";
affectedByWind = 0.0;
swLighting = 0;
scaleMin = 0.2;
scaleMax = 1.18;
};
class GrassCrookedForest: DefaultClutter
{
model = "a3\plants_f\Clutter\c_GrassGreen_GroupHard.p3d";
affectedByWind = 0.3;
swLighting = 1;
scaleMin = 0.8;
scaleMax = 1.4;
};
class FernAutumn: DefaultClutter
{
model = "a3\plants_f\Clutter\c_Flower_Cakile.p3d";
affectedByWind = 0.1;
scaleMin = 0.6;
scaleMax = 1.2;
};
class FernAutumnTall: DefaultClutter
{
model = "a3\plants_f\Clutter\c_Plant_Chicory.p3d";
affectedByWind = 0.15;
scaleMin = 0.75;
scaleMax = 1.0;
};
class MushroomsHorcak: DefaultClutter
{
model = "a3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
affectedByWind = 0;
scaleMin = 0.85;
scaleMax = 1.25;
};
class WeedSedge: DefaultClutter
{
model = "a3\plants_f\Clutter\c_Flower_Tansy.p3d";
affectedByWind = 0.2;
swLighting = 1;
scaleMin = 0.5;
scaleMax = 0.85;
};
};
class Names{};
safePositionAnchor[] = {3874.47,4093.64};
safePositionRadius = 1900;
};
initWorld = "american";
demoWorld = "american";
};
class CfgWorldList
{
class american{};
};
class CfgSurfaces
{
class Default{};
class cemento: Default
{
files = "a3al_concrete_*";
character = "Empty";
soundEnviron = "concrete";
soundHit = "concrete";
rough = 0.05;
maxSpeedCoef = 1;
dust = 0.05;
lucidity = 0.3;
grassCover = 0.0;
impact = "hitConcrete";
maxClutterColoringCoef = 1.35;
};
class asfalto: Default
{
files = "a3al_asphalt_*";
character = "Empty";
soundEnviron = "asphalt_exp";
soundHit = "concrete";
rough = 0.05;
maxSpeedCoef = 1;
dust = 0.05;
lucidity = 0.03;
grassCover = 0.0;
maxClutterColoringCoef = 1.5;
impact = "hitConcrete";
surfaceFriction = 1.8;
};
class hierba: Default
{
files = "a3al_grass_tall_*";
character = "GrassTallGroup";
soundEnviron = "grasstall_exp";
soundHit = "soft_ground";
rough = 0.05;
maxSpeedCoef = 0.9;
dust = 2.0;
lucidity = 4;
grassCover = 0.5;
maxClutterColoringCoef = 1.06;
impact = "hitGroundSoft";
surfaceFriction = 0.7;
AIAvoidStance = 2;
};
class forest: Default
{
files = "a3al_forest_*";
character = "RainForestGroupT";
soundEnviron = "forest_exp";
soundHit = "soft_ground";
rough = 0.05;
maxSpeedCoef = 0.8;
dust = 3.0;
lucidity = 3.5;
grassCover = 0.1;
maxClutterColoringCoef = 1.05;
impact = "hitGroundSoft";
surfaceFriction = 0.8;
};
class tierra: Default
{
files = "a3al_reddirt_*";
character = "RedDirtGroup";
soundEnviron = "dirt_exp";
soundHit = "soft_ground";
rough = 0.05;
maxSpeedCoef = 0.9;
dust = 5.2;
lucidity = 1;
grassCover = 0.05;
maxClutterColoringCoef = 1.02;
impact = "hitGroundRed";
surfaceFriction = 1.2;
};
class road_dust: Default
{
files = "surf_exp_roaddirt_*";
soundEnviron = "dirt_exp";
soundHit = "soft_ground";
rough = 0.05;
maxSpeedCoef = 0.9;
dust = 5.2;
impact = "hitGroundRed";
surfaceFriction = 1.2;
};
class piedra: Default
{
files = "a3al_rock_*";
character = "CliffGroup";
soundEnviron = "stones_exp";
soundHit = "concrete";
rough = 0.05;
maxSpeedCoef = -8.0;
dust = 0.05;
lucidity = 1;
grassCover = 0.0;
maxClutterColoringCoef = 1.3;
impact = "hitGroundHard";
surfaceFriction = 1.9;
};
class arena: Default
{
access = 2;
files = "a3al_beach_*";
character = "Empty";
soundEnviron = "sand";
soundHit = "soft_ground";
rough = 0.05;
dust = 4.83;
lucidity = 1.25;
grassCover = 0.0;
impact = "hitGroundSoft";
surfaceFriction = 0.5;
restitution = 0.05;
maxSpeedCoef = 0.8;
maxClutterColoringCoef = 1.35;
};
};
class CfgSurfaceCharacters
{
class GrassTallGroup
{
probability[] = {0.1,0.15,0.31,0.05,0.06,0.05};
names[] = {"c_GrassBunch_HI","c_GrassBunch_LO","c_GrassTropic","c_Grass_nettle","c_Grass_Leaves_coltsfoot","c_Grass_leaf_big"};
};
class RainForestGroupT
{
probability[] = {0.029,0.322,0.072000004,0.061,0.014000001,0.011,0.084,0.14,0.05,0.05,0.05};
names[] = {"c_forest_roots","c_forest_violet_leaves","c_forest_violet_leaves2","c_forest_violet_single","c_forest_fern","c_forest_BiglLeaves","c_forest_BiglLeaves2","GrassCrookedForest","FernAutumn","FernAutumnTall","WeedSedge"};
};
class RedDirtGroup
{
probability[] = {0.01,0.03,0.03,0.02,0.1,0.06};
names[] = {"sparse_Grass","short_Grass","mimosa","large_stones","small_stones","sparse_Grass2"};
};
class CliffGroup
{
probability[] = {0.08};
names[] = {"rock_stones"};
};
};
