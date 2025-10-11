
void FUN_0060d820(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined8 uStack_30;
  
  bVar1 = true;
  FUN_004ae9e0(param_1,"%*s%s:\n%*s",param_4,&DAT_0083e5c2,param_2,param_4 + 2,&DAT_0083e5c2);
  uVar4 = 0;
  puVar3 = &DAT_00917140;
  while( true ) {
    iVar2 = FUN_005b4140(param_3,uVar4,uStack_30);
    uStack_30 = extraout_RDX_00;
    if (iVar2 != 0) {
      if (!bVar1) {
        FUN_004ab870(param_1,&DAT_00801fb4);
      }
      bVar1 = false;
      FUN_004ab870(param_1,*(undefined8 *)(puVar3 + 2));
      uStack_30 = extraout_RDX;
    }
    if (*(long *)(puVar3 + 8) == 0) break;
    uVar4 = puVar3[6];
    puVar3 = puVar3 + 6;
  }
  pcVar5 = "<EMPTY>\n";
  if (!bVar1) {
    pcVar5 = "\n";
  }
  FUN_004ab870(param_1,pcVar5);
  return;
}

