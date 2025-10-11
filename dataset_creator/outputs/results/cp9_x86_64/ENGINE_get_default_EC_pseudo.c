
void ENGINE_get_default_EC(void)

{
  ossl_engine_table_select(&dh_table,1,"../crypto/engine/tb_eckey.c",0x3e);
  return;
}

