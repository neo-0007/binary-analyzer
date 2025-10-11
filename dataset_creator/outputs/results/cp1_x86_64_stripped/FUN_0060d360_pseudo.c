
void FUN_0060d360(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  
  pbVar1 = (byte *)*param_2;
  FUN_004ae9e0(param_1,"%*sPolicy: ",param_3,&DAT_0083e5c2);
  FUN_004a0450(param_1,*(undefined8 *)(pbVar1 + 8));
  FUN_004ab870(param_1,&DAT_008243ea);
  pcVar2 = "Critical";
  if ((*pbVar1 & 0x10) == 0) {
    pcVar2 = "Non Critical";
  }
  iVar3 = (int)param_3 + 2;
  FUN_004ae9e0(param_1,"%*s%s\n",iVar3,&DAT_0083e5c2,pcVar2);
  if (*(long *)(pbVar1 + 0x10) != 0) {
    FUN_0060c060(param_1,*(long *)(pbVar1 + 0x10),iVar3);
    FUN_004ab870(param_1,&DAT_008243ea);
    return;
  }
  FUN_004ae9e0(param_1,"%*sNo Qualifiers\n",iVar3,&DAT_0083e5c2);
  return;
}

