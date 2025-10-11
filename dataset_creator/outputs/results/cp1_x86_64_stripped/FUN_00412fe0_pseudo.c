
undefined4 *
FUN_00412fe0(undefined8 param_1,int *param_2,undefined4 *param_3,long param_4,long param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == -1) {
    if (param_2 != (int *)0x0) {
      if (*(long *)(param_2 + 0x18) != 0) {
        param_4 = FUN_0053e710();
        goto LAB_004130ea;
      }
      iVar1 = *param_2;
LAB_00413105:
      param_6 = iVar1;
      if (iVar1 != -1) goto LAB_0041301d;
      if (param_3 != (undefined4 *)0x0) {
LAB_004133a0:
        FUN_0051f420();
        puVar5 = (undefined4 *)0x0;
        FUN_0051f540("../crypto/evp/pmeth_lib.c",0xd6,"int_ctx_new");
        FUN_0051f8f0(6,0x9c,0);
        goto LAB_004130a8;
      }
LAB_00413117:
      if (param_4 != 0) goto LAB_00413120;
LAB_004132a9:
      puVar5 = (undefined4 *)0x0;
LAB_0041304f:
      FUN_0051f420();
      FUN_0051f540("../crypto/evp/pmeth_lib.c",0x13c,"int_ctx_new");
      FUN_0051f8f0(6,0x9c,0);
      local_58 = 0;
      goto LAB_00413088;
    }
LAB_004130ea:
    if (param_4 == 0) {
      if (param_3 != (undefined4 *)0x0) goto LAB_004133a0;
      goto LAB_004132a9;
    }
    iVar1 = FUN_0040e5a0(param_4);
    if (iVar1 != 0) goto LAB_00413105;
    iVar1 = -1;
    if (param_3 != (undefined4 *)0x0) goto LAB_004133a0;
LAB_00413120:
    lVar3 = 0;
    if (param_2 == (int *)0x0) {
LAB_00413370:
      local_58 = FUN_0053e6a0(param_1,param_4,param_5);
    }
    else {
LAB_0041312c:
      if (*(long *)(param_2 + 0x18) == 0) goto LAB_00413370;
      iVar2 = FUN_0053e0e0();
      if (iVar2 == 0) {
        FUN_0051f420();
        puVar5 = (undefined4 *)0x0;
        FUN_0051f540("../crypto/evp/pmeth_lib.c",0x114,"int_ctx_new");
        FUN_0051f8f0(6,0x86,0);
        goto LAB_004130a8;
      }
      local_58 = *(long *)(param_2 + 0x18);
    }
    if (local_58 != 0) {
      local_44 = 0;
      FUN_0053e780(local_58,&LAB_00412690,&local_44);
      param_6 = iVar1;
      if (((local_44 != 0) && (param_6 = local_44, iVar1 != -1)) &&
         (param_6 = iVar1, local_44 != iVar1)) {
        FUN_0051f420();
        puVar5 = (undefined4 *)0x0;
        FUN_0051f540("../crypto/evp/pmeth_lib.c",0x131,"int_ctx_new");
        FUN_0051f8f0(6,0xc0103,0);
        FUN_0053e0f0(local_58);
        goto LAB_004130a8;
      }
      puVar6 = (undefined4 *)FUN_0041aec0(0xb0,"../crypto/evp/pmeth_lib.c",0x13e);
      puVar5 = puVar6;
      if (puVar6 == (undefined4 *)0x0) goto LAB_00413331;
      param_3 = (undefined4 *)0x0;
      goto LAB_004131c1;
    }
  }
  else {
LAB_0041301d:
    if (param_3 == (undefined4 *)0x0) {
      iVar1 = param_6;
      if (param_2 != (int *)0x0) {
        if ((*(byte *)(param_2 + 0x13) & 1) == 0) {
          param_4 = FUN_00423b00(param_6);
        }
        puVar5 = *(undefined4 **)(param_2 + 6);
        if ((puVar5 != (undefined4 *)0x0) ||
           (puVar5 = *(undefined4 **)(param_2 + 4), puVar5 != (undefined4 *)0x0)) goto LAB_00413029;
        puVar5 = (undefined4 *)FUN_0051d4a0(param_6);
        if (puVar5 != (undefined4 *)0x0) goto LAB_00413039;
        if ((*(byte *)(param_2 + 0x13) & 1) == 0) goto LAB_004132e3;
        puVar5 = (undefined4 *)0x0;
        lVar3 = FUN_004126e0(param_6);
        if (param_4 == 0) goto LAB_00413046;
        goto LAB_0041312c;
      }
      param_4 = FUN_00423b00(param_6);
      puVar5 = (undefined4 *)FUN_0051d4a0(param_6);
      if (puVar5 != (undefined4 *)0x0) goto LAB_00413039;
LAB_004132e3:
      lVar3 = FUN_00412620(param_6);
      if (lVar3 == 0) goto LAB_00413117;
    }
    else {
      param_4 = 0;
      puVar5 = param_3;
LAB_00413029:
      iVar1 = FUN_0051a180(puVar5);
      if (iVar1 == 0) {
        FUN_0051f420();
        puVar5 = (undefined4 *)0x0;
        FUN_0051f540("../crypto/evp/pmeth_lib.c",0xf1,"int_ctx_new");
        FUN_0051f8f0(6,0x80026,0);
        goto LAB_004130a8;
      }
LAB_00413039:
      lVar3 = FUN_0051d4d0(puVar5,param_6);
LAB_00413046:
      param_3 = puVar5;
      if (lVar3 == 0) goto LAB_0041304f;
    }
    puVar6 = (undefined4 *)FUN_0041aec0(0xb0,"../crypto/evp/pmeth_lib.c",0x13e);
    local_58 = 0;
    puVar5 = param_3;
    if (puVar6 != (undefined4 *)0x0) {
LAB_004131c1:
      if (param_5 != 0) {
        lVar4 = FUN_0041c2c0(param_5,"../crypto/evp/pmeth_lib.c",0x14d);
        *(long *)(puVar6 + 4) = lVar4;
        if (lVar4 == 0) {
          FUN_0041ad60(puVar6,"../crypto/evp/pmeth_lib.c",0x14f);
          goto LAB_00413095;
        }
      }
      *(long *)(puVar6 + 6) = param_4;
      puVar6[0x1d] = param_6;
      *(undefined8 *)(puVar6 + 2) = param_1;
      *(undefined4 **)(puVar6 + 0x20) = param_3;
      *(long *)(puVar6 + 8) = local_58;
      *(long *)(puVar6 + 0x1e) = lVar3;
      *puVar6 = 0;
      *(int **)(puVar6 + 0x22) = param_2;
      if (param_2 != (int *)0x0) {
        FUN_0040ed80(param_2);
      }
      puVar5 = puVar6;
      if (((lVar3 != 0) && (*(code **)(lVar3 + 8) != (code *)0x0)) &&
         (iVar1 = (**(code **)(lVar3 + 8))(puVar6), iVar1 < 1)) {
        *(undefined8 *)(puVar6 + 0x1e) = 0;
        puVar5 = (undefined4 *)0x0;
        FUN_00412f00(puVar6);
      }
      goto LAB_004130a8;
    }
LAB_00413331:
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/pmeth_lib.c",0x140,"int_ctx_new");
    FUN_0051f8f0(6,0xc0100,0);
LAB_00413088:
    if (puVar5 != (undefined4 *)0x0) {
      FUN_0051a270(puVar5);
    }
LAB_00413095:
    FUN_0053e0f0(local_58);
  }
  puVar5 = (undefined4 *)0x0;
LAB_004130a8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar5;
}

