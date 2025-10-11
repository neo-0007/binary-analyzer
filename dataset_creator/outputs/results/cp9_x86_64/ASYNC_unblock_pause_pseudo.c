
void ASYNC_unblock_pause(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = OPENSSL_init_crypto(0x100,0);
  if (iVar1 != 0) {
    lVar2 = async_get_ctx();
    if (((lVar2 != 0) && (*(long *)(lVar2 + 0x3c8) != 0)) && (*(int *)(lVar2 + 0x3d0) != 0)) {
      *(int *)(lVar2 + 0x3d0) = *(int *)(lVar2 + 0x3d0) + -1;
      return;
    }
  }
  return;
}

