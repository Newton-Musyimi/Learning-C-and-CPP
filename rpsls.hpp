class rpsls{
  private:
    game_count = 0;
  public:
    rpsls();
    bool game_loop(bool game);
    void game_instructions();
    void counter();
    int get_count();
    void rock(int computer);
    void paper(int computer);
    void scissors(int computer);
    void lizard(int computer);
    void spock(int computer);
    void count(int count)
}
