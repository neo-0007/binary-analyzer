
undefined8
asn1_check_tlen(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
               long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uchar *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  long local_50;
  uchar *local_48;
  long local_40;
  
  puVar1 = (uchar *)*param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = puVar1;
  if (param_7 < 1) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x47c,"asn1_check_tlen");
    ERR_set_error(0xd,0xe0,0);
LAB_004a0480:
    uVar3 = 0;
    if (param_11 == (char *)0x0) goto LAB_004a02d7;
  }
  else {
    if (param_11 == (char *)0x0) {
      uVar2 = ASN1_get_object(&local_48,&local_50,&local_58,&local_54,param_7);
LAB_004a02a1:
      if ((uVar2 & 0x80) == 0) {
        if (-1 < param_8) {
          if ((local_58 != param_8) || (local_54 != param_9)) {
            uVar3 = 0xffffffff;
            if (param_10 != '\0') goto LAB_004a02d7;
            ERR_new();
            ERR_set_debug("../crypto/asn1/tasn_dec.c",0x4a4,"asn1_check_tlen");
            ERR_set_error(0xd,0xa8,0);
            goto LAB_004a0480;
          }
          if (param_11 != (char *)0x0) {
            *param_11 = '\0';
          }
        }
        if ((uVar2 & 1) != 0) {
          local_50 = param_7 - ((long)local_48 - (long)puVar1);
        }
        if (param_4 != (byte *)0x0) {
          *param_4 = (byte)uVar2 & 1;
        }
        if (param_5 != (byte *)0x0) {
          *param_5 = (byte)uVar2 & 0x20;
        }
        if (param_1 != (long *)0x0) {
          *param_1 = local_50;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = (char)local_54;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = local_58;
        }
        *param_6 = (long)local_48;
        uVar3 = 1;
        goto LAB_004a02d7;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/tasn_dec.c",0x49a,"asn1_check_tlen");
      ERR_set_error(0xd,0x66,0);
      goto LAB_004a0480;
    }
    if (*param_11 != '\0') {
      local_50 = *(long *)(param_11 + 8);
      uVar2 = *(uint *)(param_11 + 4);
      local_54 = *(int *)(param_11 + 0x14);
      local_58 = *(int *)(param_11 + 0x10);
      local_48 = puVar1 + *(int *)(param_11 + 0x18);
      goto LAB_004a02a1;
    }
    uVar2 = ASN1_get_object(&local_48,&local_50,&local_58,&local_54,param_7);
    *param_11 = '\x01';
    *(uint *)(param_11 + 4) = uVar2;
    *(int *)(param_11 + 0x14) = local_54;
    *(long *)(param_11 + 8) = local_50;
    *(int *)(param_11 + 0x10) = local_58;
    iVar4 = (int)local_48 - (int)puVar1;
    *(int *)(param_11 + 0x18) = iVar4;
    if (((uVar2 & 0x81) != 0) || (iVar4 + local_50 <= param_7)) goto LAB_004a02a1;
    ERR_new();
    ERR_set_debug("../crypto/asn1/tasn_dec.c",0x493,"asn1_check_tlen");
    ERR_set_error(0xd,0x9b,0);
  }
  *param_11 = '\0';
  uVar3 = 0;
LAB_004a02d7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

