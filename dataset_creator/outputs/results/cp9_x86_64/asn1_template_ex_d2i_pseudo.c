
ulong asn1_template_ex_d2i
                (long param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,char param_5,
                undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  char local_52;
  char local_51;
  long local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) goto LAB_004a2710;
  local_48 = (char *)*param_2;
  if ((*param_4 & 0x10) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = asn1_template_noexp_d2i();
      return uVar6;
    }
    goto LAB_004a287d;
  }
  uVar2 = asn1_check_tlen(&local_50,0,0,&local_52,&local_51,&local_48,param_3,param_4[1],
                          (uint)*param_4 & 0xc0,(int)param_5,param_6);
  pcVar4 = local_48;
  lVar1 = local_50;
  uVar6 = (ulong)uVar2;
  if (uVar2 == 0) {
    ERR_new();
    uVar5 = 0x20d;
LAB_004a279e:
    ERR_set_debug("../crypto/asn1/tasn_dec.c",uVar5,"asn1_template_ex_d2i");
    ERR_set_error(0xd,0x8010a,0);
    uVar6 = 0;
  }
  else if (uVar2 != 0xffffffff) {
    if (local_51 == '\0') {
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x212,"asn1_template_ex_d2i");
      ERR_set_error(0xd,0x78,0);
      uVar6 = 0;
    }
    else {
      iVar3 = asn1_template_noexp_d2i
                        (param_1,&local_48,local_50,param_4,0,param_6,param_7,param_8,param_9);
      if (iVar3 == 0) {
        ERR_new();
        uVar5 = 0x219;
        goto LAB_004a279e;
      }
      local_50 = lVar1 - ((long)local_48 - (long)pcVar4);
      if (local_52 == '\0') {
        pcVar4 = local_48;
        if (local_50 != 0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x229,"asn1_template_ex_d2i");
          ERR_set_error(0xd,0x77,0);
          goto LAB_004a2710;
        }
      }
      else {
        if (((local_50 < 2) || (*local_48 != '\0')) || (local_48[1] != '\0')) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/tasn_dec.c",0x221,"asn1_template_ex_d2i");
          ERR_set_error(0xd,0x89,0);
LAB_004a2710:
          uVar6 = 0;
          goto LAB_004a2713;
        }
        pcVar4 = local_48 + 2;
      }
      *param_2 = pcVar4;
      uVar6 = 1;
    }
  }
LAB_004a2713:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_004a287d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

