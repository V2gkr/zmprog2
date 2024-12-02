
class Logger{
    private:
        Logger() {}
        Logger(const Logger&);
        Logger& operator=(const Logger&);
    public:
        static Logger& getInstance();
        void log(const std::string& message);
};

class sss{
    public:
        int a;
};