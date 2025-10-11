
void FUN_004d1de0(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = param_1;
  do {
    pbVar2 = pbVar1 + 1;
    *pbVar1 = (&DAT_007eb1c0)[*pbVar1];
    pbVar1 = pbVar2;
  } while (pbVar2 != param_1 + 8);
  return;
}

