
void __nss_database_freeres(void)

{
  free(global_database_state);
  global_database_state = (void *)0x0;
  return;
}

