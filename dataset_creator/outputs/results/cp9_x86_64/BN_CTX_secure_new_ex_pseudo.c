
void BN_CTX_secure_new_ex(void)

{
  long lVar1;
  
  lVar1 = BN_CTX_new_ex();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x3c) = 8;
  }
  return;
}

