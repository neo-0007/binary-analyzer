
undefined8 afalg_cipher_cleanup(long param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = (int *)EVP_CIPHER_CTX_get_cipher_data();
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0x1890671)) {
    close(piVar1[1]);
    close(piVar1[2]);
    if (piVar1[5] == 1) {
      close(piVar1[4]);
    }
    syscall(0xcf,*(undefined8 *)(piVar1 + 6));
    return 1;
  }
  return 1;
}

