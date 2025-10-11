
/* get_ttype_entry(lsda_header_info*, unsigned long) */

ulong get_ttype_entry(lsda_header_info *param_1,ulong param_2)

{
  lsda_header_info lVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  lVar1 = param_1[0x28];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == (lsda_header_info)0xff) {
    lVar4 = 0;
  }
  else {
    bVar2 = (byte)lVar1 & 7;
    if (bVar2 == 2) {
      lVar4 = param_2 * -2;
    }
    else {
      if (bVar2 < 3) {
        if (bVar2 != 0) {
          uVar3 = get_ttype_entry(param_1,param_2);
          return uVar3;
        }
      }
      else {
        lVar4 = param_2 * -4;
        if (bVar2 == 3) goto LAB_006ac47e;
        if (bVar2 != 4) {
          uVar3 = get_ttype_entry(param_1,param_2);
          return uVar3;
        }
      }
      lVar4 = param_2 * -8;
    }
  }
LAB_006ac47e:
  read_encoded_value_with_base
            ((uchar)lVar1,*(ulong *)(param_1 + 0x10),(uchar *)(lVar4 + *(long *)(param_1 + 0x18)),
             &local_18);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

