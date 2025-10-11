
undefined8 parse_tagging_part_0(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  uintmax_t uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = strtouq(param_1,&local_38,10);
  if (local_38 == (char *)0x0) {
    if ((long)uVar2 < 0) {
LAB_00613098:
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x166,"parse_tagging");
      ERR_set_error(0xd,0xbb,0);
      uVar3 = 0;
      goto LAB_00612fb9;
    }
    *param_3 = (int)uVar2;
  }
  else {
    if ((*local_38 != '\0') && (uVar3 = 0, param_1 + param_2 < local_38)) goto LAB_00612fb9;
    if ((long)uVar2 < 0) goto LAB_00613098;
    *param_3 = (int)uVar2;
    if (param_2 != (int)local_38 - (int)param_1) {
      cVar1 = *local_38;
      if (cVar1 == 'P') {
        *param_4 = 0xc0;
        uVar3 = 1;
        goto LAB_00612fb9;
      }
      if (cVar1 < 'Q') {
        if (cVar1 == 'A') {
          *param_4 = 0x40;
          uVar3 = 1;
          goto LAB_00612fb9;
        }
        if (cVar1 == 'C') goto LAB_00612fab;
      }
      else if (cVar1 == 'U') {
        *param_4 = 0;
        uVar3 = 1;
        goto LAB_00612fb9;
      }
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x183,"parse_tagging");
      ERR_set_error(0xd,0xba,"Char=%c",(int)*local_38);
      uVar3 = 0;
      goto LAB_00612fb9;
    }
  }
LAB_00612fab:
  *param_4 = 0x80;
  uVar3 = 1;
LAB_00612fb9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

