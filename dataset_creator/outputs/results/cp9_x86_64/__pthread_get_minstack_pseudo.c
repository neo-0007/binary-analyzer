
long __pthread_get_minstack(void)

{
  return (((_dl_tls_static_size + _dl_tls_static_align) - 1) / _dl_tls_static_align) *
         _dl_tls_static_align + 0x4000 + _dl_pagesize;
}

