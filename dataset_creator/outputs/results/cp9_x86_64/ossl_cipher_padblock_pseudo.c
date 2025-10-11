
void ossl_cipher_padblock(long param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < param_3) {
    memset((void *)(param_1 + uVar1),(int)param_3 - (int)uVar1 & 0xff,param_3 - uVar1);
    return;
  }
  return;
}

