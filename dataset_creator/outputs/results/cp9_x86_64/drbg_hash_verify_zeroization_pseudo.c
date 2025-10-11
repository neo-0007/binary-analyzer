
undefined8 drbg_hash_verify_zeroization(long param_1)

{
  long lVar1;
  char *pcVar2;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  pcVar2 = (char *)(lVar1 + 0x28);
  do {
    if (*pcVar2 != '\0') {
      return 0;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 0x97));
  do {
    if (*pcVar2 != '\0') {
      return 0;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 0x106));
  do {
    if (*pcVar2 != '\0') {
      return 0;
    }
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 != (char *)(lVar1 + 0x175));
  return 1;
}

