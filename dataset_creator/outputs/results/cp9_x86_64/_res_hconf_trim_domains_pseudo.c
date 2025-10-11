
void _res_hconf_trim_domains(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *local_50;
  
  uVar1 = _res_hconf._24_4_;
  if (_res_hconf._24_4_ == 0) {
    return;
  }
  pcVar6 = (char *)*param_1;
  sVar4 = strlen(pcVar6);
  uVar2 = _res_hconf._32_8_;
  if ((int)uVar1 < 1) goto LAB_0076ea25;
  sVar5 = strlen((char *)_res_hconf._32_8_);
  if (sVar5 < sVar4) {
    pcVar7 = pcVar6 + (sVar4 - sVar5);
    iVar3 = strcasecmp(pcVar7,(char *)uVar2);
    if (iVar3 != 0) goto LAB_0076e9b6;
  }
  else {
LAB_0076e9b6:
    uVar2 = _res_hconf._40_8_;
    if (uVar1 == 1) goto LAB_0076ea25;
    sVar5 = strlen((char *)_res_hconf._40_8_);
    if (sVar5 < sVar4) {
      pcVar7 = pcVar6 + (sVar4 - sVar5);
      iVar3 = strcasecmp(pcVar7,(char *)uVar2);
      if (iVar3 == 0) goto LAB_0076eb9a;
    }
    uVar2 = _res_hconf._48_8_;
    if (uVar1 == 2) goto LAB_0076ea25;
    sVar5 = strlen((char *)_res_hconf._48_8_);
    if (sVar5 < sVar4) {
      pcVar7 = pcVar6 + (sVar4 - sVar5);
      iVar3 = strcasecmp(pcVar7,(char *)uVar2);
      if (iVar3 == 0) goto LAB_0076eb9a;
    }
    uVar2 = _res_hconf._56_8_;
    if ((uVar1 == 3) || (sVar5 = strlen((char *)_res_hconf._56_8_), sVar4 <= sVar5))
    goto LAB_0076ea25;
    pcVar7 = pcVar6 + (sVar4 - sVar5);
    iVar3 = strcasecmp(pcVar7,(char *)uVar2);
    if (iVar3 != 0) goto LAB_0076ea25;
  }
LAB_0076eb9a:
  *pcVar7 = '\0';
LAB_0076ea25:
  local_50 = (long *)param_1[1];
  pcVar6 = (char *)*local_50;
  if (pcVar6 != (char *)0x0) {
    lVar8 = 8;
    while (sVar4 = strlen(pcVar6), uVar2 = _res_hconf._32_8_, uVar1 = _res_hconf._24_4_,
          0 < (int)_res_hconf._24_4_) {
      sVar5 = strlen((char *)_res_hconf._32_8_);
      if (sVar5 < sVar4) {
        pcVar7 = pcVar6 + (sVar4 - sVar5);
        iVar3 = strcasecmp(pcVar7,(char *)uVar2);
        if (iVar3 != 0) goto LAB_0076ea50;
LAB_0076eb6a:
        *pcVar7 = '\0';
        local_50 = (long *)param_1[1];
      }
      else {
LAB_0076ea50:
        uVar2 = _res_hconf._40_8_;
        if (uVar1 != 1) {
          sVar5 = strlen((char *)_res_hconf._40_8_);
          if (sVar5 < sVar4) {
            pcVar7 = pcVar6 + (sVar4 - sVar5);
            iVar3 = strcasecmp(pcVar7,(char *)uVar2);
            if (iVar3 == 0) goto LAB_0076eb6a;
          }
          uVar2 = _res_hconf._48_8_;
          if (uVar1 != 2) {
            sVar5 = strlen((char *)_res_hconf._48_8_);
            if (sVar5 < sVar4) {
              pcVar7 = pcVar6 + (sVar4 - sVar5);
              iVar3 = strcasecmp(pcVar7,(char *)uVar2);
              if (iVar3 == 0) goto LAB_0076eb6a;
            }
            uVar2 = _res_hconf._56_8_;
            if ((uVar1 != 3) && (sVar5 = strlen((char *)_res_hconf._56_8_), sVar5 < sVar4)) {
              pcVar7 = pcVar6 + (sVar4 - sVar5);
              iVar3 = strcasecmp(pcVar7,(char *)uVar2);
              if (iVar3 == 0) goto LAB_0076eb6a;
            }
          }
        }
      }
      pcVar6 = *(char **)((long)local_50 + lVar8);
      if (pcVar6 == (char *)0x0) {
        return;
      }
      lVar8 = lVar8 + 8;
    }
  }
  return;
}

