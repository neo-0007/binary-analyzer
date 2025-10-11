
int WHIRLPOOL_Update(WHIRLPOOL_CTX *c,void *inp,size_t bytes)

{
  ulong uVar1;
  void *inp_00;
  void *pvVar2;
  undefined8 local_48;
  
  local_48 = inp;
  if (bytes >> 0x3c != 0) {
    uVar1 = bytes + 0xf000000000000000;
    inp_00 = inp;
    do {
      pvVar2 = (void *)((long)inp_00 + 0x1000000000000000);
      WHIRLPOOL_BitUpdate(c,inp_00,0x8000000000000000);
      inp_00 = pvVar2;
    } while (pvVar2 != (void *)(((uVar1 >> 0x3c) + 1 << 0x3c) + (long)inp));
    bytes = bytes & 0xfffffffffffffff;
    local_48 = (void *)((long)inp + (uVar1 & 0xf000000000000000) + 0x1000000000000000);
  }
  if (bytes != 0) {
    WHIRLPOOL_BitUpdate(c,local_48,bytes * 8);
  }
  return 1;
}

