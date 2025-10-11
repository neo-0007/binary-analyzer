
undefined8 FUN_006158b0(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_006e9510(param_1,&local_38,10);
  if (local_38 == (char *)0x0) {
    if (lVar2 < 0) {
LAB_006159f8:
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x166,"parse_tagging");
      FUN_0051f8f0(0xd,0xbb,0);
      uVar3 = 0;
      goto LAB_00615919;
    }
    *param_3 = (int)lVar2;
  }
  else {
    if ((*local_38 != '\0') && (uVar3 = 0, (char *)(param_2 + param_1) < local_38))
    goto LAB_00615919;
    if (lVar2 < 0) goto LAB_006159f8;
    *param_3 = (int)lVar2;
    if (param_2 != (int)local_38 - (int)param_1) {
      cVar1 = *local_38;
      if (cVar1 == 'P') {
        *param_4 = 0xc0;
        uVar3 = 1;
        goto LAB_00615919;
      }
      if (cVar1 < 'Q') {
        if (cVar1 == 'A') {
          *param_4 = 0x40;
          uVar3 = 1;
          goto LAB_00615919;
        }
        if (cVar1 == 'C') goto LAB_0061590b;
      }
      else if (cVar1 == 'U') {
        *param_4 = 0;
        uVar3 = 1;
        goto LAB_00615919;
      }
      FUN_0051f420();
      FUN_0051f540("../crypto/asn1/asn1_gen.c",0x183,"parse_tagging");
      FUN_0051f8f0(0xd,0xba,"Char=%c",(int)*local_38);
      uVar3 = 0;
      goto LAB_00615919;
    }
  }
LAB_0061590b:
  *param_4 = 0x80;
  uVar3 = 1;
LAB_00615919:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar3;
}

