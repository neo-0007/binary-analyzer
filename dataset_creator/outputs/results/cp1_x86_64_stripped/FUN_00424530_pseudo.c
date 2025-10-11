
undefined8 FUN_00424530(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    iVar1 = FUN_00424460();
    if (iVar1 == 0) {
      iVar1 = FUN_00424390(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_005466e0((int)*param_1);
        if (iVar1 != 0) goto LAB_004245b2;
        FUN_0051f420();
        uVar3 = 0;
        FUN_0051f540("../crypto/objects/obj_dat.c",0x178,"OBJ_txt2obj");
        FUN_0051f8f0(8,0x67,0);
        goto LAB_0042465b;
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = FUN_004239c0(iVar1);
      return uVar3;
    }
  }
  else {
LAB_004245b2:
    iVar1 = FUN_0049fe10(0,0,param_1,0xffffffff);
    if (0 < iVar1) {
      iVar2 = FUN_004a1f30(0,iVar1,6);
      if (-1 < iVar2) {
        lVar4 = FUN_0041ad90((long)iVar2,"../crypto/objects/obj_dat.c",0x18b);
        if (lVar4 != 0) {
          local_40 = lVar4;
          FUN_004a1e10(&local_40,0,iVar1,6,0);
          FUN_0049fe10(local_40,iVar1,param_1,0xffffffff);
          local_38 = lVar4;
          uVar3 = FUN_004a0a40(0,&local_38,(long)iVar2);
          FUN_0041ad60(lVar4,"../crypto/objects/obj_dat.c",0x198);
          goto LAB_0042465b;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/objects/obj_dat.c",0x18c,"OBJ_txt2obj");
        FUN_0051f8f0(8,0xc0100,0);
      }
    }
    uVar3 = 0;
LAB_0042465b:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

