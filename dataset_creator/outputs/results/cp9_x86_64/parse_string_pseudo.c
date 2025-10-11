
uint parse_string(undefined8 param_1,undefined8 *param_2,char param_3,long param_4,
                 undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char local_418 [1000];
  long local_30;
  
  pcVar7 = (char *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = *pcVar7;
  if (cVar2 != '\0') {
    uVar5 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        if (param_3 == cVar2) {
          local_418[uVar6] = '\0';
          if (uVar5 == 0) {
            uVar3 = ossl_property_value(param_1,local_418,param_5);
            *(undefined4 *)(param_4 + 0x10) = uVar3;
          }
          else {
            ERR_new();
            ERR_set_debug("../crypto/property/property_parse.c",0xb8,"parse_string");
            ERR_set_error(0x37,0x6d,"HERE-->%s",*param_2);
          }
          do {
            pcVar1 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
            iVar4 = ossl_ctype_check((int)*pcVar1,8);
          } while (iVar4 != 0);
          *param_2 = pcVar7;
          uVar5 = uVar5 ^ 1;
          *(undefined4 *)(param_4 + 4) = 0;
          goto LAB_0042c9d4;
        }
        if (uVar6 < 999) break;
        cVar2 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        uVar5 = 1;
        if (cVar2 == '\0') goto LAB_0042c995;
      }
      pcVar7 = pcVar7 + 1;
      local_418[uVar6] = cVar2;
      uVar6 = uVar6 + 1;
      cVar2 = *pcVar7;
    } while (cVar2 != '\0');
  }
LAB_0042c995:
  ERR_new();
  ERR_set_debug("../crypto/property/property_parse.c",0xb2,"parse_string");
  ERR_set_error(0x37,0x6a,"HERE-->%c%s",(int)param_3,*param_2);
  uVar5 = 0;
LAB_0042c9d4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

