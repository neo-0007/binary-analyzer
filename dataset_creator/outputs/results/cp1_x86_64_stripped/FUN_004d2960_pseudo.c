
undefined8 FUN_004d2960(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  piVar3 = (int *)FUN_004a21f0();
  if (piVar3 == (int *)0x0) {
    FUN_0051f420();
    uVar6 = 0xbb;
LAB_004d2a79:
    FUN_0051f540("../crypto/dh/dh_ameth.c",uVar6,"dh_priv_encode");
    FUN_0051f8f0(5,0xc0100,0);
  }
  else {
    if (*(undefined **)(param_2 + 8) == &DAT_00902400) {
      iVar1 = FUN_004d32c0(*(undefined8 *)(param_2 + 0x20),piVar3 + 2);
    }
    else {
      iVar1 = FUN_004d3150();
    }
    *piVar3 = iVar1;
    if (iVar1 < 1) {
      FUN_0051f420();
      uVar6 = 0xc1;
      goto LAB_004d2a79;
    }
    lVar4 = *(long *)(param_2 + 0x20);
    piVar3[1] = 0x10;
    lVar4 = FUN_0049fa60(*(undefined8 *)(lVar4 + 0x78),0);
    if (lVar4 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_ameth.c",0xca,"dh_priv_encode");
      FUN_0051f8f0(5,0x6a,0);
    }
    else {
      uVar2 = FUN_004a76d0(lVar4,&local_38);
      FUN_004a2300(lVar4);
      uVar6 = local_38;
      uVar5 = FUN_004239c0(**(undefined4 **)(param_2 + 8));
      iVar1 = FUN_004a2c50(param_1,uVar5,0,0x10,piVar3,uVar6,uVar2);
      uVar6 = 1;
      if (iVar1 != 0) goto LAB_004d2a40;
    }
  }
  FUN_0041ad60(local_38,"../crypto/dh/dh_ameth.c",0xda);
  FUN_004a2270(piVar3);
  FUN_004a2300(0);
  uVar6 = 0;
LAB_004d2a40:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

