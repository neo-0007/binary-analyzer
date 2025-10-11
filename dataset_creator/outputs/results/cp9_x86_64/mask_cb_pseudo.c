
undefined8 mask_cb(char *param_1,int param_2,ulong *param_3)

{
  uint tag;
  ulong uVar1;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((((param_2 == 3) && (*param_1 == 'D')) && (param_1[1] == 'I')) && (param_1[2] == 'R')) {
    *param_3 = *param_3 | 0x2906;
    return 1;
  }
  tag = asn1_str2tag();
  if ((tag != 0) && ((tag & 0x10000) == 0)) {
    uVar1 = ASN1_tag2bit(tag);
    if (uVar1 != 0) {
      *param_3 = *param_3 | uVar1;
      return 1;
    }
  }
  return 0;
}

