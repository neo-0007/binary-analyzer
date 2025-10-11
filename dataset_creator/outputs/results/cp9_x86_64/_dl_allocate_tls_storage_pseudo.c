
undefined8 * _dl_allocate_tls_storage(void)

{
  long lVar1;
  undefined8 *puVar2;
  void *__ptr;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  lVar1 = _dl_tls_static_size;
  uVar4 = _dl_tls_static_align;
  bVar6 = 0;
  __ptr = malloc(_dl_tls_static_size + 8 + _dl_tls_static_align);
  if (__ptr == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar2 = (undefined8 *)(lVar1 + -0x9c0 + (((long)__ptr + (uVar4 - 1)) / uVar4) * uVar4);
  *puVar2 = 0;
  puVar2[0x137] = 0;
  puVar5 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8))
                       + 0x9c0U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
  }
  puVar2[0x138] = __ptr;
  lVar1 = _dl_tls_max_dtv_idx + 0xe;
  plVar3 = (long *)calloc(_dl_tls_max_dtv_idx + 0x10,0x10);
  if (plVar3 != (long *)0x0) {
    *plVar3 = lVar1;
    puVar2[1] = plVar3 + 2;
    return puVar2;
  }
  free(__ptr);
  return (undefined8 *)0x0;
}

