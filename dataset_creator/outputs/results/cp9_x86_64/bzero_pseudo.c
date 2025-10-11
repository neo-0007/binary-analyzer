
void bzero(void *__s,size_t __n)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  
  if (__n < 0x10) {
    uVar1 = (uint)__n;
    if (7 < uVar1) {
      *(undefined8 *)__s = 0;
      *(undefined8 *)((long)__s + (__n - 8)) = 0;
      return;
    }
    if (3 < uVar1) {
      *(undefined4 *)__s = 0;
      *(undefined4 *)((long)__s + (__n - 4)) = 0;
      return;
    }
    if (1 < uVar1) {
      *(undefined2 *)__s = 0;
      *(undefined1 *)((long)__s + (__n - 1)) = 0;
      return;
    }
    if (uVar1 != 0) {
      *(undefined1 *)__s = 0;
      return;
    }
  }
  else {
    if (__n < 0x21) {
      *(undefined1 (*) [16])((long)__s + (__n - 0x10)) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])__s = (undefined1  [16])0x0;
      return;
    }
    *(undefined1 (*) [16])__s = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)__s + 0x10) = (undefined1  [16])0x0;
    if (__n < 0x41) {
      *(undefined1 (*) [16])((long)__s + (__n - 0x20)) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])((long)__s + (__n - 0x10)) = (undefined1  [16])0x0;
      return;
    }
    *(undefined1 (*) [16])((long)__s + 0x20) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)__s + 0x30) = (undefined1  [16])0x0;
    pauVar3 = (undefined1 (*) [16])((long)__s + (__n - 0x40));
    if (0x80 < __n) {
      pauVar2 = (undefined1 (*) [16])((long)__s + 0x40U & 0xffffffffffffffe0);
      do {
        *pauVar2 = (undefined1  [16])0x0;
        pauVar2[1] = (undefined1  [16])0x0;
        pauVar2[2] = (undefined1  [16])0x0;
        pauVar2[3] = (undefined1  [16])0x0;
        pauVar2 = pauVar2 + 4;
      } while (pauVar2 < pauVar3);
    }
    *pauVar3 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)__s + (__n - 0x30)) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)__s + (__n - 0x20)) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)__s + (__n - 0x10)) = (undefined1  [16])0x0;
  }
  return;
}

