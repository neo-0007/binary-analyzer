
void _res_hconf_trim_domain(char *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *__s1;
  
  sVar4 = strlen(param_1);
  uVar2 = _res_hconf._32_8_;
  uVar1 = _res_hconf._24_4_;
  if (0 < (int)_res_hconf._24_4_) {
    sVar5 = strlen((char *)_res_hconf._32_8_);
    if (sVar5 < sVar4) {
      __s1 = param_1 + (sVar4 - sVar5);
      iVar3 = strcasecmp(__s1,(char *)uVar2);
      if (iVar3 == 0) goto LAB_0076e8ec;
    }
    uVar2 = _res_hconf._40_8_;
    if (uVar1 == 1) {
      return;
    }
    sVar5 = strlen((char *)_res_hconf._40_8_);
    if (sVar5 < sVar4) {
      __s1 = param_1 + (sVar4 - sVar5);
      iVar3 = strcasecmp(__s1,(char *)uVar2);
      if (iVar3 == 0) goto LAB_0076e8ec;
    }
    uVar2 = _res_hconf._48_8_;
    if (uVar1 == 2) {
      return;
    }
    sVar5 = strlen((char *)_res_hconf._48_8_);
    if (sVar5 < sVar4) {
      __s1 = param_1 + (sVar4 - sVar5);
      iVar3 = strcasecmp(__s1,(char *)uVar2);
      if (iVar3 == 0) goto LAB_0076e8ec;
    }
    uVar2 = _res_hconf._56_8_;
    if ((uVar1 != 3) && (sVar5 = strlen((char *)_res_hconf._56_8_), sVar5 < sVar4)) {
      __s1 = param_1 + (sVar4 - sVar5);
      iVar3 = strcasecmp(__s1,(char *)uVar2);
      if (iVar3 == 0) {
LAB_0076e8ec:
        *__s1 = '\0';
        return;
      }
    }
  }
  return;
}

