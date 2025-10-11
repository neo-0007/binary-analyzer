
ulong OPENSSL_rdtsc(void)

{
  ulong uVar1;
  undefined8 in_RAX;
  
  uVar1 = rdtsc();
  return CONCAT44((int)((ulong)in_RAX >> 0x20),(int)uVar1) | uVar1 & 0xffffffff00000000;
}

