
undefined8 parse_tzname(long *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t __n;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *__src;
  undefined8 *__dest;
  
  __src = (byte *)*param_1;
  bVar2 = *__src;
  pbVar6 = __src;
  if ((byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) {
    do {
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
    } while ((byte)((*pbVar1 & 0xdf) + 0xbf) < 0x1a);
    __n = (long)pbVar6 - (long)__src;
    if (2 < __n) {
LAB_0075723f:
      if (tzstring_list == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)malloc(__n + 0x11);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        puVar4[1] = __n;
        __dest = puVar4 + 2;
        *puVar4 = 0;
        memcpy(__dest,__src,__n);
        *(undefined1 *)((long)puVar4 + __n + 0x10) = 0;
        tzstring_list = puVar4;
      }
      else {
        puVar4 = tzstring_list;
        do {
          puVar5 = puVar4;
          if (__n <= (ulong)puVar5[1]) {
            __dest = (undefined8 *)((long)puVar5 + puVar5[1] + (0x10 - __n));
            iVar3 = bcmp(__src,__dest,__n);
            if (iVar3 == 0) goto LAB_007572c7;
          }
          puVar4 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
        puVar4 = (undefined8 *)malloc(__n + 0x11);
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        puVar4[1] = __n;
        __dest = puVar4 + 2;
        *puVar4 = 0;
        memcpy(__dest,__src,__n);
        *(undefined1 *)((long)puVar4 + __n + 0x10) = 0;
        *puVar5 = puVar4;
      }
LAB_007572c7:
      (&tz_rules)[(long)param_2 * 6] = __dest;
      *param_1 = (long)pbVar6;
      return 1;
    }
  }
  __src = __src + 1;
  pbVar6 = __src;
  if (bVar2 != 0x3c) {
    return 0;
  }
  do {
    bVar2 = *pbVar6;
    if (0x19 < (byte)((bVar2 & 0xdf) + 0xbf)) {
      if (0x39 < bVar2) {
        __n = (long)pbVar6 - (long)__src;
        if (bVar2 != 0x3e) {
          return 0;
        }
        if (__n < 3) {
          return 0;
        }
        pbVar6 = pbVar6 + 1;
        goto LAB_0075723f;
      }
      if ((0x3ff280000000000U >> ((ulong)bVar2 & 0x3f) & 1) == 0) {
        return 0;
      }
    }
    pbVar6 = pbVar6 + 1;
  } while( true );
}

