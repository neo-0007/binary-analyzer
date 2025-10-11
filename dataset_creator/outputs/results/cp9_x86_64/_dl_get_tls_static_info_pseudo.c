
void _dl_get_tls_static_info(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = _dl_tls_static_size;
  *param_2 = _dl_tls_static_align;
  return;
}

