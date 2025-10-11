
undefined8 FUN_004d7640(undefined8 param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  lVar3 = *(long *)(param_2 + 0x20);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (*(int *)(param_2 + 0x48) == 0) {
    piVar2 = (int *)0x0;
    uVar4 = 0xffffffff;
LAB_004d76e6:
    lVar3 = FUN_0049fa60(*(undefined8 *)(lVar3 + 0x68),0);
    if (lVar3 == 0) {
      FUN_0051f420();
      uVar4 = 0x77;
      goto LAB_004d77b9;
    }
    iVar1 = FUN_004a76d0(lVar3,&local_38);
    thunk_FUN_004a2270(lVar3);
    if (iVar1 < 1) {
      FUN_0051f420();
      uVar4 = 0x7f;
      goto LAB_004d77b9;
    }
    lVar3 = FUN_004239c0(0x74);
    if (lVar3 != 0) {
      iVar1 = FUN_005af9b0(param_1,lVar3,uVar4,piVar2,local_38,iVar1);
      uVar4 = 1;
      if (iVar1 != 0) goto LAB_004d7771;
    }
  }
  else {
    piVar2 = *(int **)(lVar3 + 8);
    if (((piVar2 == (int *)0x0) || (piVar2 = *(int **)(lVar3 + 0x10), piVar2 == (int *)0x0)) ||
       (piVar2 = *(int **)(lVar3 + 0x18), piVar2 == (int *)0x0)) {
      uVar4 = 0xffffffff;
      goto LAB_004d76e6;
    }
    piVar2 = (int *)FUN_004a21f0();
    if (piVar2 == (int *)0x0) {
      FUN_0051f420();
      uVar4 = 0x68;
    }
    else {
      uVar4 = 0x10;
      iVar1 = FUN_004d7bf0(lVar3,piVar2 + 2);
      *piVar2 = iVar1;
      if (0 < iVar1) goto LAB_004d76e6;
      FUN_0051f420();
      uVar4 = 0x6d;
    }
LAB_004d77b9:
    FUN_0051f540("../crypto/dsa/dsa_ameth.c",uVar4,"dsa_pub_encode");
    FUN_0051f8f0(10,0xc0100,0);
  }
  FUN_0041ad60(local_38,"../crypto/dsa/dsa_ameth.c",0x8b);
  FUN_004a2270(piVar2);
  uVar4 = 0;
LAB_004d7771:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar4;
}

