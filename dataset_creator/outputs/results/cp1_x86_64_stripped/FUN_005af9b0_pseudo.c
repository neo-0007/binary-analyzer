
int FUN_005af9b0(undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long in_R8;
  undefined4 in_R9D;
  
  iVar2 = FUN_004a8880(*param_1);
  if ((iVar2 != 0) && (iVar2 = 1, in_R8 != 0)) {
    FUN_0041ad60(*(undefined8 *)(param_1[1] + 8),"../crypto/x509/x_pubkey.c",0x3f3);
    puVar1 = (undefined4 *)param_1[1];
    *(long *)(puVar1 + 2) = in_R8;
    *puVar1 = in_R9D;
    *(ulong *)(puVar1 + 4) = *(ulong *)(puVar1 + 4) & 0xfffffffffffffff0 | 8;
  }
  return iVar2;
}

