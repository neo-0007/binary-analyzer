
/* WARNING: Type propagation algorithm not settling */

undefined4 asn1_cb(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *__s1;
  undefined8 uVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) goto LAB_00613208;
  if (0 < param_2) {
    pcVar3 = param_1;
    do {
      __s1 = pcVar3 + 1;
      if (*pcVar3 == ':') {
        iVar2 = param_2 - ((int)__s1 - (int)param_1);
        param_2 = (int)pcVar3 - (int)param_1;
        goto LAB_0061315c;
      }
      pcVar3 = __s1;
    } while (param_1 + param_2 != __s1);
  }
  __s1 = (char *)0x0;
  iVar2 = 0;
LAB_0061315c:
  uVar1 = asn1_str2tag(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    ERR_new();
    ERR_set_debug("../crypto/asn1/asn1_gen.c",0x10a,"asn1_cb");
    ERR_set_error(0xd,0xc2,"tag=%s",param_1);
    uVar5 = 0xffffffff;
    goto LAB_0061318c;
  }
  if ((uVar1 & 0x10000) == 0) {
    param_3[2] = uVar1;
    *(char **)(param_3 + 4) = __s1;
    uVar5 = 0;
    if ((__s1 == (char *)0x0) && (param_1[param_2] != '\0')) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x114,"asn1_cb");
      ERR_set_error(0xd,0xbd,0);
      uVar5 = 0xffffffff;
    }
    goto LAB_0061318c;
  }
  switch(uVar1) {
  case 0x10001:
    if (*param_3 != -1) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/asn1_gen.c",0x11f,"asn1_cb");
      ERR_set_error(0xd,0xb5,0);
      uVar5 = 0xffffffff;
      goto LAB_0061318c;
    }
    if (__s1 == (char *)0x0) goto LAB_00613208;
    iVar2 = parse_tagging_part_0(__s1,iVar2,param_3,param_3 + 1);
    break;
  case 0x10002:
    if ((__s1 != (char *)0x0) &&
       (iVar2 = parse_tagging_part_0(__s1,iVar2,&local_38,&local_34), iVar2 != 0)) {
      iVar2 = append_exp(param_3,local_38,local_34,1,0,0);
      break;
    }
    goto LAB_00613208;
  default:
    goto switchD_006131dc_caseD_10003;
  case 0x10004:
    iVar2 = append_exp(param_3,3,0,0,1,1);
    break;
  case 0x10005:
    iVar2 = append_exp(param_3,4,0,0,0,1);
    break;
  case 0x10006:
    iVar2 = append_exp(param_3,0x10,0,1,0,1);
    break;
  case 0x10007:
    iVar2 = append_exp(param_3,0x11,0,1,0,1);
    break;
  case 0x10008:
    if (__s1 == (char *)0x0) {
      ERR_new();
      uVar4 = 0x144;
    }
    else {
      iVar2 = strncmp(__s1,"ASCII",5);
      if (iVar2 == 0) {
        param_3[3] = 1;
        uVar5 = 1;
        goto LAB_0061318c;
      }
      iVar2 = strncmp(__s1,"UTF8",4);
      if (iVar2 == 0) {
        param_3[3] = 2;
        uVar5 = 1;
        goto LAB_0061318c;
      }
      if (((*__s1 == 'H') && (__s1[1] == 'E')) && (__s1[2] == 'X')) {
        param_3[3] = 3;
        uVar5 = 1;
        goto LAB_0061318c;
      }
      iVar2 = strncmp(__s1,"BITLIST",7);
      if (iVar2 == 0) {
        param_3[3] = 4;
        uVar5 = 1;
        goto LAB_0061318c;
      }
      ERR_new();
      uVar4 = 0x150;
    }
    ERR_set_debug("../crypto/asn1/asn1_gen.c",uVar4,"asn1_cb");
    ERR_set_error(0xd,0xa0,0);
    uVar5 = 0xffffffff;
    goto LAB_0061318c;
  }
  if (iVar2 == 0) {
LAB_00613208:
    uVar5 = 0xffffffff;
  }
  else {
switchD_006131dc_caseD_10003:
    uVar5 = 1;
  }
LAB_0061318c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

