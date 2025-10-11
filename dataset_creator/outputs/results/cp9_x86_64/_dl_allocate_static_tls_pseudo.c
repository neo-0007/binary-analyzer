
void _dl_allocate_static_tls(long param_1)

{
  ulong uVar1;
  ulong in_RAX;
  ulong in_R8;
  long in_R9;
  
  if ((*(long *)(param_1 + 0x458) != -1) &&
     (uVar1 = *(ulong *)(param_1 + 0x448), uVar1 <= _dl_tls_static_align)) {
    in_RAX = _dl_tls_static_size - _dl_tls_static_used;
    if (0x9bf < in_RAX) {
      in_R9 = *(long *)(param_1 + 0x450);
      in_RAX = in_RAX - 0x9c0;
      in_R8 = *(long *)(param_1 + 0x440) + in_R9;
      if (in_R8 <= in_RAX) {
        _dl_tls_static_used =
             ((_dl_tls_static_used + in_RAX) - in_R9) - ((in_RAX - in_R8) / uVar1) * uVar1;
        *(long *)(param_1 + 0x458) = _dl_tls_static_used;
        if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x31c) & 4) == 0) {
          *(byte *)(param_1 + 0x31d) = *(byte *)(param_1 + 0x31d) | 0x40;
          return;
        }
        _dl_init_static_tls(param_1,uVar1,(in_RAX - in_R8) % uVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0,*(undefined8 *)(param_1 + 8),0,"cannot allocate memory in static TLS block",
                   in_R8,in_R9,in_RAX);
}

