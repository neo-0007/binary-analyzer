
undefined8 _dl_try_allocate_static_tls(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (((*(long *)(param_1 + 0x458) != -1) &&
      (uVar5 = *(ulong *)(param_1 + 0x448), uVar5 <= _dl_tls_static_align)) &&
     (0x9bf < (ulong)(_dl_tls_static_size - _dl_tls_static_used))) {
    lVar1 = *(long *)(param_1 + 0x450);
    uVar3 = (_dl_tls_static_size - _dl_tls_static_used) - 0x9c0;
    uVar4 = *(long *)(param_1 + 0x440) + lVar1;
    if (uVar4 <= uVar3) {
      lVar2 = ((uVar3 - uVar4) / uVar5) * uVar5;
      uVar5 = (uVar3 - lVar1) - lVar2;
      if (param_2 != '\0') {
        if (_dl_tls_static_optional < uVar5) {
          return 0xffffffff;
        }
        _dl_tls_static_optional = (_dl_tls_static_optional - uVar3) + lVar1 + lVar2;
      }
      _dl_tls_static_used = _dl_tls_static_used + uVar5;
      *(long *)(param_1 + 0x458) = _dl_tls_static_used;
      if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x31c) & 4) != 0) {
        _dl_init_static_tls();
        return 0;
      }
      *(byte *)(param_1 + 0x31d) = *(byte *)(param_1 + 0x31d) | 0x40;
      return 0;
    }
  }
  return 0xffffffff;
}

