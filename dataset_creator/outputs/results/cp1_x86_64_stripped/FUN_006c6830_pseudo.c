
void FUN_006c6830(long param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  pcVar3 = param_2 + 1;
  *param_2 = 0x25;
  if ((uVar2 & 0x800) != 0) {
    param_2[1] = 0x2b;
    pcVar3 = param_2 + 2;
  }
  if ((uVar2 & 0x400) != 0) {
    *pcVar3 = '#';
    pcVar3 = pcVar3 + 1;
  }
  uVar5 = uVar2 & 0x104;
  if (uVar5 == 0x104) {
    pcVar4 = pcVar3;
    if (param_3 == '\0') goto LAB_006c68e4;
LAB_006c68b7:
    *pcVar4 = param_3;
    pcVar1 = pcVar4 + 2;
    pcVar3 = pcVar4 + 1;
  }
  else {
    pcVar3[0] = '.';
    pcVar3[1] = '*';
    pcVar4 = pcVar3 + 2;
    if (param_3 != '\0') goto LAB_006c68b7;
    pcVar1 = pcVar3 + 3;
    pcVar3 = pcVar3 + 2;
  }
  if (uVar5 == 4) {
    *pcVar3 = 'f';
    *pcVar1 = '\0';
    return;
  }
  if (uVar5 == 0x100) {
    *pcVar3 = (-((uVar2 & 0x4000) == 0) & 0x20U) + 0x45;
    *pcVar1 = '\0';
    return;
  }
  if (uVar5 != 0x104) {
    *pcVar3 = (-((uVar2 & 0x4000) == 0) & 0x20U) + 0x47;
    *pcVar1 = '\0';
    return;
  }
LAB_006c68e4:
  *pcVar3 = (-((uVar2 & 0x4000) == 0) & 0x20U) + 0x41;
  pcVar3[1] = '\0';
  return;
}

