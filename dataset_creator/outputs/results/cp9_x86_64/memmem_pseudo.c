
void * memmem(void *__haystack,size_t __haystacklen,void *__needle,size_t __needlelen)

{
  ulong __n;
  byte bVar1;
  char *pcVar2;
  byte bVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  byte local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__needlelen == 0) goto LAB_0070a69b;
  if (__needlelen == 1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
      pvVar5 = memchr(__haystack,(uint)*__needle,__haystacklen);
      return pvVar5;
    }
    goto LAB_0070a797;
  }
  if (__haystacklen < __needlelen) {
LAB_0070a699:
    __haystack = (char *)0x0;
  }
  else {
    pcVar13 = (char *)((__haystacklen - __needlelen) + (long)__haystack);
    if (__needlelen != 2) {
      if (__needlelen < 0x101) {
        __n = __needlelen - 1;
        pbVar12 = local_148;
        for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          pbVar12 = pbVar12 + 8;
        }
        if (__n < 4) {
          iVar10 = 1;
          uVar9 = 1;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          uVar4 = (ulong)*__needle;
          uVar9 = 1;
          do {
            bVar1 = *(byte *)((long)__needle + uVar9);
            local_148[(ulong)bVar1 + uVar4 * -8 & 0xff] = (byte)uVar9;
            uVar4 = (ulong)*(byte *)((long)__needle + uVar9 + 1);
            local_148[uVar4 + (ulong)bVar1 * -8 & 0xff] = (byte)uVar9 + 1;
            iVar10 = (int)uVar9 + 2;
            uVar9 = uVar9 + 2;
          } while ((__needlelen - 5 & 0xfffffffffffffffe) + 3 != uVar9);
        }
        uVar4 = (long)(iVar10 + 1);
        do {
          uVar7 = uVar4;
          local_148[(byte)(*(char *)((long)__needle + uVar9) +
                          *(char *)((long)__needle + (uVar9 - 1)) * -8)] =
               ((char)iVar10 - (char)(iVar10 + 1)) + (char)uVar7;
          uVar4 = uVar7 + 1;
          uVar9 = uVar7;
        } while (uVar7 < __n);
        uVar9 = 0;
        bVar3 = *(char *)((long)__needle + (__needlelen - 1)) +
                *(char *)((long)__needle + (__needlelen - 2)) * -8;
        bVar1 = local_148[bVar3];
        local_148[bVar3] = (byte)__n;
LAB_0070a62a:
        if (__haystack <= pcVar13) {
LAB_0070a630:
          __haystack = (void *)((long)__haystack + __n);
                    /* WARNING: Load size is inaccurate */
          uVar4 = (ulong)local_148[(byte)(*__haystack + *(char *)((long)__haystack + -1) * -8)];
          if (uVar4 == 0) goto code_r0x0070a64f;
          goto LAB_0070a654;
        }
        goto LAB_0070a699;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pvVar5 = (void *)two_way_long_needle();
        return pvVar5;
      }
      goto LAB_0070a797;
    }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
    uVar11 = (uint)*__needle << 0x10 | (uint)*(byte *)((long)__needle + 1);
    uVar8 = (uint)*__haystack << 0x10 | (uint)*(byte *)((long)__haystack + 1);
    if ((pcVar13 < (char *)((long)__haystack + 1U)) ||
       (pcVar2 = (char *)((long)__haystack + 1U), uVar11 == uVar8)) {
LAB_0070a74d:
      if (uVar11 != uVar8) goto LAB_0070a699;
    }
    else {
      do {
        __haystack = pcVar2;
        uVar8 = uVar8 << 0x10 | (uint)*(byte *)((long)__haystack + 1);
        if (pcVar13 < (char *)((long)__haystack + 1)) goto LAB_0070a74d;
        pcVar2 = (char *)((long)__haystack + 1);
      } while (uVar11 != uVar8);
    }
  }
LAB_0070a69b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __haystack;
  }
LAB_0070a797:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
code_r0x0070a64f:
  if (pcVar13 < __haystack) {
LAB_0070a654:
    __haystack = (void *)((long)__haystack + -uVar4);
    if (__n <= uVar4) {
      if ((__n < 0xf) || (*(long *)((long)__haystack + uVar9) == *(long *)((long)__needle + uVar9)))
      {
        iVar10 = bcmp(__haystack,__needle,__n);
        if (iVar10 == 0) goto LAB_0070a69b;
        bVar14 = uVar9 < 8;
        uVar9 = uVar9 - 8;
        if (bVar14) {
          uVar9 = __needlelen - 9;
        }
      }
      __haystack = (void *)((long)__haystack + (__n - bVar1));
      if (pcVar13 < __haystack) goto LAB_0070a699;
      goto LAB_0070a630;
    }
    goto LAB_0070a62a;
  }
  goto LAB_0070a630;
}

