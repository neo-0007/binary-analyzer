
undefined8
FUN_0042b7a0(uint *param_1,int param_2,uint param_3,undefined8 param_4,long param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (uint *)0x0) || (param_5 == 0)) || ((param_3 & *param_1) == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/rsa/rsa_lib.c",0x3a0,"int_get_rsa_md_name");
    FUN_0051f8f0(6,0x93,0);
    uVar2 = 0xfffffffe;
    goto LAB_0042b873;
  }
  if (param_2 == -1) {
    iVar1 = FUN_00413ca0(param_1,"RSA");
    if (iVar1 == 0) {
      iVar1 = FUN_00413ca0(param_1,"RSA-PSS");
      goto joined_r0x0042b8c8;
    }
  }
  else {
    uVar2 = FUN_0040e630(param_2);
    iVar1 = FUN_00413ca0(param_1,uVar2);
joined_r0x0042b8c8:
    if (iVar1 == 0) {
      uVar2 = 0xffffffff;
      goto LAB_0042b873;
    }
  }
  FUN_0041e290(&local_b8,param_4,param_5,param_6);
  local_68 = local_98;
  local_88 = local_b8;
  uStack_80 = uStack_b0;
  local_78 = local_a8;
  uStack_70 = uStack_a0;
  FUN_0041e470(&local_b8);
  local_60 = local_b8;
  uStack_58 = uStack_b0;
  local_40 = local_98;
  local_50 = local_a8;
  uStack_48 = uStack_a0;
  uVar2 = FUN_004142f0(param_1,&local_88);
LAB_0042b873:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar2;
}

