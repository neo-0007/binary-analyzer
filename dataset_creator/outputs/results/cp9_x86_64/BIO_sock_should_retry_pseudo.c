
int BIO_sock_should_retry(int i)

{
  int iVar1;
  int *piVar2;
  
  if (1 < i + 1U) {
    return 0;
  }
  piVar2 = __errno_location();
  iVar1 = BIO_sock_non_fatal_error(*piVar2);
  return iVar1;
}

