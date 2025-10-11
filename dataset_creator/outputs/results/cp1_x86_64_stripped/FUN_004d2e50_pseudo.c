
undefined8 FUN_004d2e50(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar3 = *(long *)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  piVar2 = (int *)FUN_004a21f0();
  if (piVar2 == (int *)0x0) {
    FUN_0051f420();
    uVar5 = 0x7c;
LAB_004d2f79:
    FUN_0051f540("../crypto/dh/dh_ameth.c",uVar5,"dh_pub_encode");
    FUN_0051f8f0(5,0xc0100,0);
  }
  else {
    if (*(undefined **)(param_2 + 8) == &DAT_00902400) {
      iVar1 = FUN_004d32c0(lVar3,piVar2 + 2);
    }
    else {
      iVar1 = FUN_004d3150();
    }
    *piVar2 = iVar1;
    if (iVar1 < 1) {
      FUN_0051f420();
      uVar5 = 0x81;
      goto LAB_004d2f79;
    }
    lVar3 = FUN_0049fa60(*(undefined8 *)(lVar3 + 0x70),0);
    if (lVar3 != 0) {
      iVar1 = FUN_004a76d0(lVar3,&local_38);
      thunk_FUN_004a2270(lVar3);
      uVar5 = local_38;
      if (iVar1 < 1) {
        FUN_0051f420();
        uVar5 = 0x8f;
        goto LAB_004d2f79;
      }
      uVar4 = FUN_004239c0(**(undefined4 **)(param_2 + 8));
      iVar1 = FUN_005af9b0(param_1,uVar4,0x10,piVar2,uVar5,iVar1);
      uVar5 = 1;
      if (iVar1 != 0) goto LAB_004d2f44;
    }
  }
  FUN_0041ad60(local_38,"../crypto/dh/dh_ameth.c",0x98);
  FUN_004a2270(piVar2);
  uVar5 = 0;
LAB_004d2f44:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar5;
}

