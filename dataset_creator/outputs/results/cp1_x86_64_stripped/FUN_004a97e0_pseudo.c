
undefined4 FUN_004a97e0(ulong param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  if (param_1 < param_2) {
    FUN_0051f420();
    FUN_0051f540("../crypto/async/async.c",0x166,"ASYNC_init_thread");
    FUN_0051f8f0(0x33,0x67,0);
    return 0;
  }
  iVar2 = FUN_00419fe0(0x100,0);
  if ((iVar2 != 0) && (iVar2 = FUN_0041abd0(0,0,FUN_004a9560), iVar2 != 0)) {
    plVar3 = (long *)FUN_0041aec0(0x18,"../crypto/async/async.c",0x170);
    if (plVar3 == (long *)0x0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/async/async.c",0x172,"ASYNC_init_thread");
      FUN_0051f8f0(0x33,0xc0100,0);
      return 0;
    }
    lVar4 = FUN_004363b0(0,param_2 & 0xffffffff);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      plVar3[2] = param_1;
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          lVar4 = FUN_0041aec0(0x3f0,"../crypto/async/async.c",0x54);
          if (lVar4 == 0) {
            FUN_0051f420();
            FUN_0051f540("../crypto/async/async.c",0x56,"async_job_new");
            FUN_0051f8f0(0x33,0xc0100,0);
            break;
          }
          *(undefined4 *)(lVar4 + 0x3dc) = 0;
          iVar2 = FUN_005bdd20(lVar4);
          if (iVar2 == 0) {
            FUN_0041ad60(*(undefined8 *)(lVar4 + 0x3d0),"../crypto/async/async.c",0x62);
            FUN_005bddc0(lVar4);
            FUN_0041ad60(lVar4,"../crypto/async/async.c",100);
            break;
          }
          lVar1 = *plVar3;
          uVar5 = uVar5 + 1;
          *(undefined8 *)(lVar4 + 0x3d0) = 0;
          FUN_00435f80(lVar1,lVar4);
        } while (param_2 != uVar5);
      }
      plVar3[1] = uVar5;
      iVar2 = FUN_00422390(&DAT_00940fb0,plVar3);
      if (iVar2 != 0) {
        return 1;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/async/async.c",0x191,"ASYNC_init_thread");
      FUN_0051f8f0(0x33,0x65,0);
      lVar4 = *plVar3;
      if (lVar4 != 0) {
        lVar4 = FUN_00436020();
        while (lVar4 != 0) {
          FUN_0041ad60(*(undefined8 *)(lVar4 + 0x3d0),"../crypto/async/async.c",0x62);
          FUN_005bddc0(lVar4);
          FUN_0041ad60(lVar4,"../crypto/async/async.c",100);
          lVar4 = FUN_00436020(*plVar3);
        }
        lVar4 = *plVar3;
      }
      FUN_004360b0(lVar4);
      FUN_0041ad60(plVar3,"../crypto/async/async.c",0x199);
      return 0;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/async/async.c",0x178,"ASYNC_init_thread");
    FUN_0051f8f0(0x33,0xc0100,0);
    FUN_0041ad60(plVar3,"../crypto/async/async.c",0x179);
  }
  return 0;
}

