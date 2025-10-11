
undefined8 * __tzstring(char *param_1)

{
  int iVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  __n = strlen(param_1);
  if (tzstring_list == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)malloc(__n + 0x11);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = __n;
      *puVar2 = 0;
      memcpy(puVar2 + 2,param_1,__n);
      *(undefined1 *)((long)puVar2 + __n + 0x10) = 0;
      tzstring_list = puVar2;
      return puVar2 + 2;
    }
  }
  else {
    puVar2 = tzstring_list;
    do {
      puVar3 = puVar2;
      if (__n <= (ulong)puVar3[1]) {
        puVar2 = (undefined8 *)((long)puVar3 + puVar3[1] + (0x10 - __n));
        iVar1 = bcmp(param_1,puVar2,__n);
        if (iVar1 == 0) {
          return puVar2;
        }
      }
      puVar2 = (undefined8 *)*puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
    puVar2 = (undefined8 *)malloc(__n + 0x11);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = __n;
      *puVar2 = 0;
      memcpy(puVar2 + 2,param_1,__n);
      *(undefined1 *)((long)puVar2 + __n + 0x10) = 0;
      *puVar3 = puVar2;
      return puVar2 + 2;
    }
  }
  return (undefined8 *)0x0;
}

