
undefined8
FUN_004a9ae0(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,long param_5,
            undefined8 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  iVar2 = FUN_00419fe0(0x100,0);
  if (iVar2 == 0) {
    return 0;
  }
  lVar3 = FUN_004a9550();
  if (lVar3 == 0) {
    iVar2 = FUN_0041abd0(0,0,FUN_004a9560);
    if (iVar2 == 0) {
      return 0;
    }
    lVar3 = FUN_0041ad90(0x3d8,"../crypto/async/async.c",0x2a);
    if (lVar3 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/async/async.c",0x2c,"async_ctx_new");
      FUN_0051f8f0(0x33,0xc0100,0);
    }
    else {
      *(undefined8 *)(lVar3 + 0x3c8) = 0;
      *(undefined4 *)(lVar3 + 0x3d0) = 0;
      iVar2 = FUN_00422390(&DAT_00940fb4,lVar3);
      if (iVar2 != 0) goto LAB_004a9b41;
    }
    FUN_0041ad60(lVar3,"../crypto/async/async.c",0x38);
    return 0;
  }
LAB_004a9b41:
  lVar4 = *param_1;
  if (lVar4 == 0) goto LAB_004a9bc6;
  *(long *)(lVar3 + 0x3c8) = lVar4;
  do {
    if (lVar4 == 0) {
      puVar6 = (undefined8 *)FUN_00422380(&DAT_00940fb0);
      if (puVar6 == (undefined8 *)0x0) {
        iVar2 = FUN_004a97e0(0,0);
        if (iVar2 == 0) goto LAB_004a9d67;
        puVar6 = (undefined8 *)FUN_00422380(&DAT_00940fb0);
      }
      lVar4 = FUN_00436020(*puVar6);
      if (lVar4 == 0) {
        if ((puVar6[2] != 0) && ((ulong)puVar6[2] <= (ulong)puVar6[1])) {
LAB_004a9d67:
          *(undefined8 *)(lVar3 + 0x3c8) = 0;
          return 1;
        }
        lVar4 = FUN_0041aec0(0x3f0,"../crypto/async/async.c",0x54);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/async/async.c",0x56,"async_job_new");
          FUN_0051f8f0(0x33,0xc0100,0);
          *(undefined8 *)(lVar3 + 0x3c8) = 0;
          return 1;
        }
        *(undefined4 *)(lVar4 + 0x3dc) = 0;
        iVar2 = FUN_005bdd20(lVar4);
        if (iVar2 == 0) {
          FUN_0041ad60(*(undefined8 *)(lVar4 + 0x3d0),"../crypto/async/async.c",0x62);
          FUN_005bddc0(lVar4);
          FUN_0041ad60(lVar4,"../crypto/async/async.c",100);
          goto LAB_004a9d67;
        }
        puVar6[1] = puVar6[1] + 1;
      }
      *(long *)(lVar3 + 0x3c8) = lVar4;
      if (param_5 == 0) {
        *(undefined8 *)(lVar4 + 0x3d0) = 0;
      }
      else {
        uVar5 = FUN_0041ad90(param_6,"../crypto/async/async.c",0x101);
        *(undefined8 *)(lVar4 + 0x3d0) = uVar5;
        lVar4 = *(long *)(*(long *)(lVar3 + 0x3c8) + 0x3d0);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/async/async.c",0x103,"ASYNC_start_job");
          FUN_0051f8f0(0x33,0xc0100,0);
          FUN_004a94c0(*(undefined8 *)(lVar3 + 0x3c8));
          *(undefined8 *)(lVar3 + 0x3c8) = 0;
          return 0;
        }
        thunk_FUN_00713a50(lVar4,param_5,param_6);
        lVar4 = *(long *)(lVar3 + 0x3c8);
      }
      *(undefined8 *)(lVar4 + 0x3c8) = param_4;
      *(undefined8 *)(lVar4 + 0x3e0) = param_2;
      uVar5 = FUN_004174a0(0);
      FUN_006f2c00(lVar3);
      lVar4 = *(long *)(lVar3 + 0x3c8);
      uVar5 = FUN_004173c0(uVar5);
      *(undefined8 *)(lVar4 + 1000) = uVar5;
    }
    else {
      iVar2 = *(int *)(lVar4 + 0x3dc);
      if (iVar2 == 3) {
        *param_3 = *(undefined4 *)(lVar4 + 0x3d8);
        *(undefined8 *)(lVar4 + 0x3e0) = 0;
        FUN_004a94c0();
        *(undefined8 *)(lVar3 + 0x3c8) = 0;
        *param_1 = 0;
        return 3;
      }
      if (iVar2 == 1) {
        *param_1 = lVar4;
        *(undefined4 *)(lVar4 + 0x3dc) = 2;
        *(undefined8 *)(lVar3 + 0x3c8) = 0;
        return 2;
      }
      if (iVar2 != 2) {
        FUN_0051f420();
        uVar5 = 0xf5;
        goto LAB_004a9cd9;
      }
      lVar4 = *param_1;
      if (lVar4 == 0) {
        return 0;
      }
      *(long *)(lVar3 + 0x3c8) = lVar4;
      lVar4 = FUN_004173c0(*(undefined8 *)(lVar4 + 1000));
      if (lVar4 == 0) {
        FUN_0051f420();
        uVar5 = 0xe1;
LAB_004a9cd9:
        FUN_0051f540("../crypto/async/async.c",uVar5,"ASYNC_start_job");
        FUN_0051f8f0(0x33,0xc0103,0);
        FUN_004a94c0(*(undefined8 *)(lVar3 + 0x3c8));
        *(undefined8 *)(lVar3 + 0x3c8) = 0;
        *param_1 = 0;
        return 0;
      }
      FUN_006f2c00(lVar3,*(undefined8 *)(lVar3 + 0x3c8));
      lVar1 = *(long *)(lVar3 + 0x3c8);
      uVar5 = FUN_004173c0(lVar4);
      *(undefined8 *)(lVar1 + 1000) = uVar5;
    }
LAB_004a9bc6:
    lVar4 = *(long *)(lVar3 + 0x3c8);
  } while( true );
}

