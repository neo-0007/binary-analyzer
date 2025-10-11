
undefined8 FUN_004d73c0(undefined8 param_1,long param_2)

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
  if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x70) == 0)) {
    FUN_0051f420();
    piVar3 = (int *)0x0;
    FUN_0051f540("../crypto/dsa/dsa_ameth.c",0xab,"dsa_priv_encode");
    FUN_0051f8f0(10,0x65,0);
  }
  else {
    piVar3 = (int *)FUN_004a21f0();
    if (piVar3 == (int *)0x0) {
      FUN_0051f420();
      uVar6 = 0xb2;
    }
    else {
      iVar1 = FUN_004d7bf0(*(undefined8 *)(param_2 + 0x20),piVar3 + 2);
      *piVar3 = iVar1;
      if (0 < iVar1) {
        lVar4 = *(long *)(param_2 + 0x20);
        piVar3[1] = 0x10;
        lVar4 = FUN_0049fa60(*(undefined8 *)(lVar4 + 0x70),0);
        if (lVar4 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/dsa/dsa_ameth.c",0xc1,"dsa_priv_encode");
          FUN_0051f8f0(10,0x6d,0);
        }
        else {
          uVar2 = FUN_004a76d0(lVar4,&local_38);
          FUN_004a2300(lVar4);
          uVar6 = local_38;
          uVar5 = FUN_004239c0(0x74);
          iVar1 = FUN_004a2c50(param_1,uVar5,0,0x10,piVar3,uVar6,uVar2);
          uVar6 = 1;
          if (iVar1 != 0) goto LAB_004d74a2;
        }
        goto LAB_004d74fd;
      }
      FUN_0051f420();
      uVar6 = 0xb8;
    }
    FUN_0051f540("../crypto/dsa/dsa_ameth.c",uVar6,"dsa_priv_encode");
    FUN_0051f8f0(10,0xc0100,0);
  }
LAB_004d74fd:
  FUN_0041ad60(local_38,"../crypto/dsa/dsa_ameth.c",0xd1);
  FUN_004a2270(piVar3);
  FUN_004a2300(0);
  uVar6 = 0;
LAB_004d74a2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar6;
}

