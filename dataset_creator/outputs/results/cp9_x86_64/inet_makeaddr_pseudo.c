
in_addr inet_makeaddr(in_addr_t __net,in_addr_t __host)

{
  uint uVar1;
  
  if (__net < 0x80) {
    uVar1 = __net << 0x18 | __host & 0xffffff;
  }
  else {
    if (__net < 0x10000) {
      return (in_addr)((__net << 0x10) >> 0x18 | (__net << 0x10 & 0xff0000) >> 8 |
                       (__host & 0xff00) << 8 | __host << 0x18);
    }
    uVar1 = __net | __host;
    if (__net < 0x1000000) {
      uVar1 = __net << 8;
      return (in_addr)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      __host << 0x18);
    }
  }
  return (in_addr)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
}

