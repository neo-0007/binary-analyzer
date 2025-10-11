
int BIO_sock_non_fatal_error(int error)

{
  uint uVar1;
  
  uVar1 = 0;
  if (error < 0x74) {
    if (error < 0x47) {
      uVar1 = 1;
      if (error != 4) {
        return (int)(error == 0xb);
      }
    }
    else {
      uVar1 = (uint)(0x181000000001 >> ((char)error + 0xb9U & 0x3f)) & 1;
    }
  }
  return uVar1;
}

