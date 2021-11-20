import React from 'react';
import logo from './logo.svg';
import { Counter } from './features/counter/Counter';
import { Routes, Route, BrowserRouter as Router } from 'react-router-dom'
import './App.css';
import Home from './screen/home/home';
import Content from './screen/content/content'
import Detail from './screen/detail/detial'

function App() {
  return (
    <Router>
      <div className="App">
        {/* <Navbar /> */}
        <Routes>
          <Route path="/" exact element={<Home />} />
          <Route path="/content" element={<Content />} />
          <Route path="/detail/:id" element={<Detail />} />
        </Routes>
      </div>
    </Router>
  );
}

export default App;
