
void FUN_007c8450(void)

{
  int iVar1;
  char *in_RCX;
  
  iVar1 = FUN_007c86e0();
  if ((0 < iVar1) && (*in_RCX == '.')) {
    *in_RCX = '\0';
    return;
  }
  return;
}

