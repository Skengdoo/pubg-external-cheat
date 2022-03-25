#pragma once
#include <cstdint>
#include <wtypes.h>
#include <vector>



typedef struct _entity_t
{
    std::uint64_t controller;
    std::uintptr_t pawn;
} entity_t, * p_entity_t;


enum bones
{
    head,
    chest
};

enum box
{
    corner,
    boxd
};

struct _globals
{
    HWND hWnd;
    uint64_t pID;
    uint64_t moduleBase;
    uint64_t gameManager;
    uint64_t gameProfile;
    uint64_t entityList;
    uint64_t replicationinfo;
    uint64_t TeamID;
    uint64_t roundManager;
    uint32_t gamestate;
    uint64_t Drones;
    uintptr_t Name;
    uint32_t entityCount;
    uintptr_t cam;
    uint64_t localPlayer;
    uint64_t localPawn;
    float width = 1920.f;
    float height = 1080.f;
    bool teamcheck = true;
    int AimbotBone = bones::head;
    int BoxType = box::corner;

    // menu 
    bool menu = false;
    bool enableEsp = true;
    bool cornerbox = false;
    bool healthbar = false;
    bool headcirlce = false;
    bool distance = false;
    bool name = false;
    bool snaplines = false;
    int aimFOV = 80.f;
    bool aimbot = false;
    bool filledbox = false;
    bool showfov = false;
    bool enablesmooth = true;
    int smooth = 2;
    int bones = bones::head;
    bool crosshair = false;
};

extern _globals globals;

