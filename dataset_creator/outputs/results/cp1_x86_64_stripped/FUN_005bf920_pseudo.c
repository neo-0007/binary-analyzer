
undefined4 FUN_005bf920(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined8 local_438 [127];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_448 = (undefined1  [16])0x0;
  local_468 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  puVar7 = local_438;
  for (lVar6 = 0x7e; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  uVar2 = FUN_005bf8f0(param_1);
  uVar4 = FUN_005bf8d0(param_1);
  iVar3 = FUN_00773340(uVar4,uVar2,local_448,0x401,local_468,0x20);
  if (iVar3 != 0) {
    if (iVar3 == -0xb) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_addr.c",0xe0,"addr_strings");
      puVar5 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar5,"calling getnameinfo()");
    }
    else {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_addr.c",0xe5,"addr_strings");
      uVar4 = FUN_0076d630(iVar3);
      FUN_0051f8f0(0x20,0x80002,uVar4);
    }
    uVar2 = 0;
    goto LAB_005bfa11;
  }
  if (local_468[0] == '\0') {
    uVar1 = FUN_005bf870(param_1);
    FUN_004aeb30(local_468,0x20,"%d",uVar1 << 8 | uVar1 >> 8);
    if (param_3 == (long *)0x0) goto LAB_005bfa40;
LAB_005bf9d9:
    lVar6 = FUN_0041c2c0(local_448,"../crypto/bio/bio_addr.c",0xf6);
    *param_3 = lVar6;
    if (param_4 == (long *)0x0) {
      if (*param_3 != 0) goto LAB_005bfa0b;
      FUN_0041ad60(0,"../crypto/bio/bio_addr.c",0x107);
      *param_3 = 0;
    }
    else {
      lVar6 = FUN_0041c2c0(local_468,"../crypto/bio/bio_addr.c",0xf8);
      *param_4 = lVar6;
      if (*param_3 == 0) {
        FUN_0041ad60(0,"../crypto/bio/bio_addr.c",0x107);
        *param_3 = 0;
        lVar6 = *param_4;
      }
      else {
        if (*param_4 != 0) goto LAB_005bfa0b;
        FUN_0041ad60(*param_3,"../crypto/bio/bio_addr.c",0x107);
        *param_3 = 0;
        lVar6 = *param_4;
      }
LAB_005bfa6f:
      FUN_0041ad60(lVar6,"../crypto/bio/bio_addr.c",0x10b);
      *param_4 = 0;
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_addr.c",0x10e,"addr_strings");
    FUN_0051f8f0(0x20,0xc0100,0);
    uVar2 = 0;
  }
  else {
    if (param_3 != (long *)0x0) goto LAB_005bf9d9;
LAB_005bfa40:
    if (param_4 != (long *)0x0) {
      lVar6 = FUN_0041c2c0(local_468,"../crypto/bio/bio_addr.c",0xf8);
      *param_4 = lVar6;
      if (lVar6 != 0) goto LAB_005bfa0b;
      goto LAB_005bfa6f;
    }
LAB_005bfa0b:
    uVar2 = 1;
  }
LAB_005bfa11:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

